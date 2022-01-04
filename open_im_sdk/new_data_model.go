package open_im_sdk

import (
	"errors"
	"gorm.io/driver/sqlite"
	"gorm.io/gorm"
)

var imdb *gorm.DB

func InitDBX(uid string) error {
	//if u.mRWMutex == nil {
	//	u.mRWMutex = new(sync.RWMutex)
	//}
	if uid == "" {
		return errors.New("no uid")
	}
	//u.mRWMutex.Lock()
	//defer u.mRWMutex.Unlock()
	//if u.db != nil {
	//	u.db.Close()
	//}
	db, err := gorm.Open(sqlite.Open(SvrConf.DbDir+"OpenIM_"+uid+".db"), &gorm.Config{})
	sdkLog("open db:", SvrConf.DbDir+"OpenIM_"+uid+".db")
	if err != nil {
		panic("failed to connect database" + err.Error())
		return err
	}
	imdb = db
	//db, err := sql.Open("sqlite3", SvrConf.DbDir+"OpenIM_"+uid+".db")
	//sdkLog("open db:", SvrConf.DbDir+"OpenIM_"+uid+".db")
	//if err != nil {
	//	sdkLog("failed open db:", SvrConf.DbDir+"OpenIM_"+uid+".db", err.Error())
	//	return err
	//}
	//u.db = db

	db.AutoMigrate(&Friend{},
		&FriendRequest{},
		&Group{},
		&GroupMember{},
		&GroupRequest{},
		&User{},
		&Black{})
	if !db.Migrator().HasTable(&Friend{}) {
		//log.NewInfo("CreateTable Friend")
		db.Migrator().CreateTable(&Friend{})
	}

	if !db.Migrator().HasTable(&FriendRequest{}) {
		//log.NewInfo("CreateTable FriendRequest")
		db.Migrator().CreateTable(&FriendRequest{})
	}

	if !db.Migrator().HasTable(&Group{}) {
		//log.NewInfo("CreateTable Group")
		db.Migrator().CreateTable(&Group{})
	}

	if !db.Migrator().HasTable(&GroupMember{}) {
		//log.NewInfo("CreateTable GroupMember")
		db.Migrator().CreateTable(&GroupMember{})
	}

	if !db.Migrator().HasTable(&GroupRequest{}) {
		//log.NewInfo("CreateTable GroupRequest")
		db.Migrator().CreateTable(&GroupRequest{})
	}

	if !db.Migrator().HasTable(&User{}) {
		//log.NewInfo("CreateTable User")
		db.Migrator().CreateTable(&User{})
	}

	if !db.Migrator().HasTable(&Black{}) {
		//log.NewInfo("CreateTable Black")
		db.Migrator().CreateTable(&Black{})
	}
	return nil

}
