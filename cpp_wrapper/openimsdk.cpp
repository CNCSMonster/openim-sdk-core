
#include <functional>
#include <memory>

extern "C" {
  #include "openimsdk.h"
}

// extern void set_print(CB_S print);
// extern void set_group_listener(CB_I_S cCallback);
// extern void set_conversation_listener(CB_I_S cCallback);
// extern void set_advanced_msg_listener(CB_I_S cCallback);
// extern void set_batch_msg_listener(CB_I_S cCallback);
// extern void set_user_listener(CB_I_S cCallback);
// extern void set_friend_listener(CB_I_S cCallback);
// extern void set_custom_business_listener(CB_I_S cCallback);
// extern GoUint8 init_sdk(CB_I_S cCallback, char* operationID, char* config);
// extern void un_init_sdk(char* operationID);
// extern void login(CB_S_I_S_S cCallback, char* operationID, char* uid, char* token);
// extern void logout(CB_S_I_S_S cCallback, char* operationID);
// extern void network_status_changed(CB_S_I_S_S cCallback, char* operationID);
// extern GoInt get_login_status(char* operationID);
// extern char* get_login_user();
// extern char* create_text_message(char* operationID, char* text);
// extern char* create_advanced_text_message(char* operationID, char* text, char* messageEntityList);
// extern char* create_text_at_message(char* operationID, char* text, char* atUserList, char* atUsersInfo, char* message);
// extern char* create_location_message(char* operationID, char* description, double longitude, double latitude);
// extern char* create_custom_message(char* operationID, char* data, char* extension, char* description);
// extern char* create_quote_message(char* operationID, char* text, char* message);

// extern char* create_advanced_quote_message(char* operationID, char* text, char* message, char* messageEntityList);
// extern char* create_card_message(char* operationID, char* cardInfo);
// extern char* create_video_message_from_full_path(char* operationID, char* videoFullPath, char* videoType, long long int duration, char* snapshotFullPath);
// extern char* create_image_message_from_full_path(char* operationID, char* imageFullPath);
// extern char* create_sound_message_from_full_path(char* operationID, char* soundPath, long long int duration);
// extern char* create_file_message_from_full_path(char* operationID, char* fileFullPath, char* fileName);
// extern char* create_image_message(char* operationID, char* imagePath);
// extern char* create_image_message_by_url(char* operationID, char* sourcePicture, char* bigPicture, char* snapshotPicture);
// extern char* create_sound_message_by_url(char* operationID, char* soundBaseInfo);
// extern char* create_sound_message(char* operationID, char* soundPath, long long int duration);
// extern char* create_video_message_by_url(char* operationID, char* videoBaseInfo);
// extern char* create_video_message(char* operationID, char* videoPath, char* videoType, long long int duration, char* snapshotPath);
// extern char* create_file_message_by_url(char* operationID, char* fileBaseInfo);
// extern char* create_file_message(char* operationID, char* filePath, char* fileName);
// extern char* create_merger_message(char* operationID, char* messageList, char* title, char* summaryList);
// extern char* create_face_message(char* operationID, int index, char* data);
// extern char* create_forward_message(char* operationID, char* m);
// extern void get_all_conversation_list(CB_S_I_S_S cCallback, char* operationID);
// extern void get_advanced_history_message_list(CB_S_I_S_S cCallback, char* operationID, char* getMessageOptions);
// extern void send_message(CB_S_I_S_S_I cCallback, char* operationID, char* message, char* recvID, char* groupID, char* offlinePushInfo);

// // =====================================================user===============================================
// //
// extern void get_users_info(CB_S_I_S_S cCallback, char* operationID, char* userIDs);
// extern void get_users_info_from_srv(CB_S_I_S_S cCallback, char* operationID, char* userIDs);
// extern void set_self_info(CB_S_I_S_S cCallback, char* operationID, char* userInfo);
// extern void get_self_user_info(CB_S_I_S_S cCallback, char* operationID);
// extern void update_msg_sender_info(CB_S_I_S_S cCallback, char* operationID, char* nickname, char* faceURL);
// extern void subscribe_users_status(CB_S_I_S_S cCallback, char* operationID, char* userIDs);
// extern void unsubscribe_users_status(CB_S_I_S_S cCallback, char* operationID, char* userIDs);
// extern void get_subscribe_users_status(CB_S_I_S_S cCallback, char* operationID);
// extern void get_user_status(CB_S_I_S_S cCallback, char* operationID, char* userIDs);

// // =====================================================friend===============================================
// //
// extern void get_specified_friends_info(CB_S_I_S_S cCallback, char* operationID, char* userIDList);
// extern void get_friend_list(CB_S_I_S_S cCallback, char* operationID);
// extern void get_friend_list_page(CB_S_I_S_S cCallback, char* operationID, int offset, int count);
// extern void search_friends(CB_S_I_S_S cCallback, char* operationID, char* searchParam);
// extern void check_friend(CB_S_I_S_S cCallback, char* operationID, char* userIDList);
// extern void add_friend(CB_S_I_S_S cCallback, char* operationID, char* userIDReqMsg);
// extern void set_friend_remark(CB_S_I_S_S cCallback, char* operationID, char* userIDRemark);
// extern void delete_friend(CB_S_I_S_S cCallback, char* operationID, char* friendUserID);
// extern void get_friend_application_list_as_recipient(CB_S_I_S_S cCallback, char* operationID);
// extern void get_friend_application_list_as_applicant(CB_S_I_S_S cCallback, char* operationID);
// extern void accept_friend_application(CB_S_I_S_S cCallback, char* operationID, char* userIDHandleMsg);
// extern void refuse_friend_application(CB_S_I_S_S cCallback, char* operationID, char* userIDHandleMsg);
// extern void add_black(CB_S_I_S_S cCallback, char* operationID, char* blackUserID);
// extern void get_black_list(CB_S_I_S_S cCallback, char* operationID);
// extern void remove_black(CB_S_I_S_S cCallback, char* operationID, char* removeUserID);

// // =====================================================group===============================================
// // CreateGroup creates a group
// //
// extern void create_group(CB_S_I_S_S cCallback, char* operationID, char* cGroupReqInfo);

// // JoinGroup joins a group
// //
// extern void join_group(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cReqMsg, int cJoinSource);

// // QuitGroup quits a group
// //
// extern void quit_group(CB_S_I_S_S cCallback, char* operationID, char* cGroupID);

// // DismissGroup dismisses a group
// //
// extern void dismiss_group(CB_S_I_S_S cCallback, char* operationID, char* cGroupID);

// // ChangeGroupMute changes the mute status of a group
// //
// extern void change_group_mute(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, int cIsMute);

// // ChangeGroupMemberMute changes the mute status of a group member
// //
// extern void change_group_member_mute(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cUserID, int cMutedSeconds);

// // SetGroupMemberRoleLevel sets the role level of a group member
// //
// extern void set_group_member_role_level(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cUserID, int cRoleLevel);

// // SetGroupMemberInfo sets the information of a group member
// //
// extern void set_group_member_info(CB_S_I_S_S cCallback, char* operationID, char* cGroupMemberInfo);

// // GetJoinedGroupList retrieves the list of joined groups
// //
// extern void get_joined_group_list(CB_S_I_S_S cCallback, char* operationID);

// // GetSpecifiedGroupsInfo retrieves the information of specified groups
// //
// extern void get_specified_groups_info(CB_S_I_S_S cCallback, char* operationID, char* cGroupIDList);

// // SearchGroups searches for groups
// //
// extern void search_groups(CB_S_I_S_S cCallback, char* operationID, char* cSearchParam);

// // SetGroupInfo sets the information of a group
// //
// extern void set_group_info(CB_S_I_S_S cCallback, char* operationID, char* cGroupInfo);

// // SetGroupVerification sets the verification mode of a group
// //
// extern void set_group_verification(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, int cVerification);

// // SetGroupLookMemberInfo sets the member information visibility of a group
// //
// extern void set_group_look_member_info(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, int cRule);

// // SetGroupApplyMemberFriend sets the friend rule for group applicants
// //
// extern void set_group_apply_member_friend(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, int cRule);

// // GetGroupMemberList retrieves the list of group members
// //
// extern void get_group_member_list(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, int cFilter, int cOffset, int cCount);

// // GetGroupMemberOwnerAndAdmin retrieves the owner and admin members of a group
// //
// extern void get_group_member_owner_and_admin(CB_S_I_S_S cCallback, char* operationID, char* cGroupID);

// // GetGroupMemberListByJoinTimeFilter retrieves the list of group members filtered by join time
// //
// extern void get_group_member_list_by_join_time_filter(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, int cOffset, int cCount, long long int cJoinTimeBegin, long long int cJoinTimeEnd, char* cFilterUserIDList);

// // GetSpecifiedGroupMembersInfo retrieves the information of specified group members
// //
// extern void get_specified_group_members_info(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cUserIDList);

// // KickGroupMember kicks group members
// //
// extern void kick_group_member(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cReason, char* cUserIDList);

// // TransferGroupOwner transfers the ownership of a group
// //
// extern void transfer_group_owner(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cNewOwnerUserID);

// // InviteUserToGroup invites users to a group
// //
// extern void invite_user_to_group(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cReason, char* cUserIDList);

// // GetGroupApplicationListAsRecipient retrieves the group application list as a recipient
// //
// extern void get_group_application_list_as_recipient(CB_S_I_S_S cCallback, char* operationID);

// // GetGroupApplicationListAsApplicant retrieves the group application list as an applicant
// //
// extern void get_group_application_list_as_applicant(CB_S_I_S_S cCallback, char* operationID);

// // AcceptGroupApplication accepts a group application
// //
// extern void accept_group_application(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cFromUserID, char* cHandleMsg);

// // RefuseGroupApplication refuses a group application
// //
// extern void refuse_group_application(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cFromUserID, char* cHandleMsg);

// // SetGroupMemberNickname sets the nickname of a group member
// //
// extern void set_group_member_nickname(CB_S_I_S_S cCallback, char* operationID, char* cGroupID, char* cUserID, char* cGroupMemberNickname);

// // SearchGroupMembers searches for group members
// //
// extern void search_group_members(CB_S_I_S_S cCallback, char* operationID, char* cSearchParam);

// // IsJoinGroup checks if the user has joined a group
// //
// extern void is_join_group(CB_S_I_S_S cCallback, char* operationID, char* cGroupID);





// typedef void (*CB_S)(char *);
// typedef void (*CB_I_S)(int,char *);
// typedef void (*CB_S_I_S_S)(char *,int,char *,char *);
// typedef void (*CB_S_I_S_S_I)(char *,int,char *,char *,int);




#include <functional>
#include <string>
#include <iostream>
#include <bitset>
#include <atomic>
#include <thread>
#include <chrono>
#include <mutex>

#define MAX_NUM_OF_CB_S 10
#define MAX_NUM_OF_CB_I_S 10
#define MAX_NUM_OF_CB_S_I_S_S 10
#define MAX_NUM_OF_CB_S_I_S_S_I 10
#define SLEEP_TIME_FOR_GET_INDEX 100 //ms


// use recursive template to generate enough function pointer array
// and define c type function interface
// and define manager class to manage function pool
namespace {
  CB_S* _fps_cb_s=new CB_S[MAX_NUM_OF_CB_S];
  CB_I_S* _fps_cb_i_s=new CB_I_S[MAX_NUM_OF_CB_I_S];
  CB_S_I_S_S* _fps_cb_s_i_s_s=new CB_S_I_S_S[MAX_NUM_OF_CB_S_I_S_S];
  CB_S_I_S_S_I* _fps_cb_s_i_s_s_i=new CB_S_I_S_S_I[MAX_NUM_OF_CB_S_I_S_S_I];
  // c type func interface call cpp function
  std::function<void(const std::string&)>* _cpp_function_cb_s=new std::function<void(const std::string&)>[MAX_NUM_OF_CB_S];
  std::function<void(int,const std::string&)>* _cpp_function_cb_i_s=new std::function<void(int,const std::string&)>[MAX_NUM_OF_CB_I_S];
  std::function<void(const std::string&,int,const std::string&,const std::string&)>* _cpp_function_cb_s_i_s_s=new std::function<void(const std::string&,int,const std::string&,const std::string&)>[MAX_NUM_OF_CB_S_I_S_S];
  std::function<void(const std::string&,int,const std::string&,const std::string&,int)>* _cpp_function_cb_s_i_s_s_i=new std::function<void(const std::string&,int,const std::string&,const std::string&,int)>[MAX_NUM_OF_CB_S_I_S_S_I];

  template<int N>
  void _generate_cb_s(){
    _fps_cb_s[N]=[](char* c_str){
      _cpp_function_cb_s[N](std::string(c_str));
    };
    _generate_cb_s<N-1>();
  }
  template<>
  void _generate_cb_s<0>(){
    _fps_cb_s[0]=[](char* c_str){
      _cpp_function_cb_s[0](std::string(c_str));
    };
  }

  template<int N>
  void _generate_cb_i_s(){
    _fps_cb_i_s[N]=[](int code,char* c_str){
      _cpp_function_cb_i_s[N](code,std::string(c_str));
    };
    _generate_cb_i_s<N-1>();
  }
  template<>
  void _generate_cb_i_s<0>(){
    _fps_cb_i_s[0]=[](int code,char* c_str){
      _cpp_function_cb_i_s[0](code,std::string(c_str));
    };
  }
  template<int N>
  void _generate_cb_s_i_s_s(){
    _fps_cb_s_i_s_s[N]=[](char* operationID,int code,char* c_str,char* c_str2){
      _cpp_function_cb_s_i_s_s[N](std::string(operationID),code,std::string(c_str),std::string(c_str2));
    };
    _generate_cb_s_i_s_s<N-1>();
  }
  template<>
  void _generate_cb_s_i_s_s<0>(){
    _fps_cb_s_i_s_s[0]=[](char* operationID,int code,char* c_str,char* c_str2){
      _cpp_function_cb_s_i_s_s[0](std::string(operationID),code,std::string(c_str),std::string(c_str2));
    };
  }
  template<int N>
  void _generate_cb_s_i_s_s_i(){
    _fps_cb_s_i_s_s_i[N]=[](char* operationID,int code,char* c_str,char* c_str2,int c_int){
      _cpp_function_cb_s_i_s_s_i[N](std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
    };
    _generate_cb_s_i_s_s_i<N-1>();
  }
  template<>
  void _generate_cb_s_i_s_s_i<0>(){
    _fps_cb_s_i_s_s_i[0]=[](char* operationID,int code,char* c_str,char* c_str2,int c_int){
      _cpp_function_cb_s_i_s_s_i[0](std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
    };
  }

  // init function
  void init(){
    _generate_cb_s<MAX_NUM_OF_CB_S-1>();
    _generate_cb_i_s<MAX_NUM_OF_CB_I_S-1>();
    _generate_cb_s_i_s_s<MAX_NUM_OF_CB_S_I_S_S-1>();
    _generate_cb_s_i_s_s_i<MAX_NUM_OF_CB_S_I_S_S_I-1>();
  }
  // define sigle instance class to manage function pool
  class FuncPoolManager{
    private:
    // define a global bitmap, and support atomic operation, to manage cb_s pool
    std::bitset<MAX_NUM_OF_CB_S> _cb_s_bitmap;
    std::bitset<MAX_NUM_OF_CB_I_S> _cb_i_s_bitmap;
    std::bitset<MAX_NUM_OF_CB_S_I_S_S> _cb_s_i_s_s_bitmap;
    std::bitset<MAX_NUM_OF_CB_S_I_S_S_I> _cb_s_i_s_s_i_bitmap;
    std::mutex _cb_s_mutex;
    std::mutex _cb_i_s_mutex;
    std::mutex _cb_s_i_s_s_mutex;
    std::mutex _cb_s_i_s_s_i_mutex;
    FuncPoolManager(){
      init();
    }
    FuncPoolManager(const FuncPoolManager&){}
    public:
    static FuncPoolManager& get_instance(){
      static FuncPoolManager instance;
      return instance;
    }
    // get a available cb_s function index
    int get_cb_s_index(){
      std::lock_guard<std::mutex> lock(_cb_s_mutex);
      int index=-1;
      for(int i=0;i<_cb_s_bitmap.size();i++){
        if(_cb_s_bitmap[i]==0){
          _cb_s_bitmap[i]=1;
          index=i;
          break;
        }
      }
      return index;
    }
    // get a available cb_i_s function index
    int get_cb_i_s_index(){
      std::lock_guard<std::mutex> lock(_cb_i_s_mutex);
      // 找到第一个为0的下标
      _cb_i_s_bitmap.size();
      int index=-1;
      for(int i=0;i<_cb_i_s_bitmap.size();i++){
        if(_cb_i_s_bitmap[i]==0){
          _cb_i_s_bitmap[i]=1;
          index=i;
          break;
        }
      }
      return index;
    }
    // get a available cb_s_i_s_s function index
    int get_cb_s_i_s_s_index(){
      std::lock_guard<std::mutex> lock(_cb_s_i_s_s_mutex);
      // 找到第一个为0的下标
      _cb_s_i_s_s_bitmap.size();
      int index=-1;
      for(int i=0;i<_cb_s_i_s_s_bitmap.size();i++){
        if(_cb_s_i_s_s_bitmap[i]==0){
          _cb_s_i_s_s_bitmap[i]=1;
          index=i;
          break;
        }
      }
      return index;
    }
    // get a available cb_s_i_s_s_i function index
    int get_cb_s_i_s_s_i_index(){
      std::lock_guard<std::mutex> lock(_cb_s_i_s_s_i_mutex);
      // 找到第一个为0的下标
      _cb_s_i_s_s_i_bitmap.size();
      int index=-1;
      for(int i=0;i<_cb_s_i_s_s_i_bitmap.size();i++){
        if(_cb_s_i_s_s_i_bitmap[i]==0){
          _cb_s_i_s_s_i_bitmap[i]=1;
          index=i;
          break;
        }
      }
      return index;
    }
    // release a available cb_s function index
    int release_cb_s_index(int index){
      std::lock_guard<std::mutex> lock(_cb_s_mutex);
      if(index<0||index>=_cb_s_bitmap.size()){
        return -1;
      }
      _cpp_function_cb_s[index]=nullptr;
      _cb_s_bitmap[index]=0;
      return 0;
    }
    // release a available cb_i_s function index
    int release_cb_i_s_index(int index){
      std::lock_guard<std::mutex> lock(_cb_i_s_mutex);
      if(index<0||index>=_cb_i_s_bitmap.size()){
        return -1;
      }
      _cpp_function_cb_i_s[index]=nullptr;
      _cb_i_s_bitmap[index]=0;
      return 0;
    }
    // release a available cb_s_i_s_s function index
    int release_cb_s_i_s_s_index(int index){
      std::lock_guard<std::mutex> lock(_cb_s_i_s_s_mutex);
      if(index<0||index>=_cb_s_i_s_s_bitmap.size()){
        return -1;
      }
      _cpp_function_cb_s_i_s_s[index]=nullptr;
      _cb_s_i_s_s_bitmap[index]=0;
      return 0;
    }
    // release a available cb_s_i_s_s_i function index
    int release_cb_s_i_s_s_i_index(int index){
      std::lock_guard<std::mutex> lock(_cb_s_i_s_s_i_mutex);
      if(index<0||index>=_cb_s_i_s_s_i_bitmap.size()){
        return -1;
      }
      _cpp_function_cb_s_i_s_s_i[index]=nullptr;
      _cb_s_i_s_s_i_bitmap[index]=0;
      return 0;
    }
  };
  FuncPoolManager& instance=FuncPoolManager::get_instance();

  // wrapper persistent function
  // wrapp CB_S,if function pool is full,return nullptr
  CB_S _wrapper_cpp_function(const std::function<void(const std::string&)>& cpp_function) {
    int index=FuncPoolManager::get_instance().get_cb_s_index();
    while(index<0){
      std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME_FOR_GET_INDEX));
      index=FuncPoolManager::get_instance().get_cb_s_index();
    }
    _cpp_function_cb_s[index]=cpp_function;
    return _fps_cb_s[index];
  }
  // wrapp CB_I_S
  CB_I_S _wrapper_cpp_function(const std::function<void(int,const std::string&)>& cpp_function)
  {
    int index=FuncPoolManager::get_instance().get_cb_i_s_index();
    while(index<0){
      std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME_FOR_GET_INDEX));
      index=FuncPoolManager::get_instance().get_cb_i_s_index();
    }
    _cpp_function_cb_i_s[index]=cpp_function;
    return _fps_cb_i_s[index];
  }
  // wrapp CB_S_I_S_S
  CB_S_I_S_S _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&)>& cpp_function)
  {
    int index=FuncPoolManager::get_instance().get_cb_s_i_s_s_index();
    while(index<0){
      std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME_FOR_GET_INDEX));
      index=FuncPoolManager::get_instance().get_cb_s_i_s_s_index();
    }
    _cpp_function_cb_s_i_s_s[index]=cpp_function;
    return _fps_cb_s_i_s_s[index];
  }
  // wrapp CB_S_I_S_S_I
  CB_S_I_S_S_I _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&,int)>& cpp_function)
  {
    int index=FuncPoolManager::get_instance().get_cb_s_i_s_s_i_index();
    while(index<0){
      std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME_FOR_GET_INDEX));
      index=FuncPoolManager::get_instance().get_cb_s_i_s_s_i_index();
    }
    _cpp_function_cb_s_i_s_s_i[index]=cpp_function;
    return _fps_cb_s_i_s_s_i[index];
  }

  // wrapp function to onetime function
  CB_S _wrapper_callonce_cpp_function(const std::function<void(const std::string&)>& cpp_function) {
    int index=FuncPoolManager::get_instance().get_cb_s_index();
    while(index<0){
      std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME_FOR_GET_INDEX));
      index=FuncPoolManager::get_instance().get_cb_s_index();
    }
    _cpp_function_cb_s[index]=[cpp_function,index](const std::string& str)->void {
      cpp_function(str);
      FuncPoolManager::get_instance().release_cb_s_index(index);
    };
    return _fps_cb_s[index];
  }
  
  CB_I_S _wrapper_callonce_cpp_function(const std::function<void(int,const std::string&)>& cpp_function)
  {
    int index=FuncPoolManager::get_instance().get_cb_i_s_index();
    while(index<0){
      std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME_FOR_GET_INDEX));
      index=FuncPoolManager::get_instance().get_cb_i_s_index();
    }
    _cpp_function_cb_i_s[index]=[cpp_function,index](int code,const std::string& str)->void {
      cpp_function(code,str);
      FuncPoolManager::get_instance().release_cb_i_s_index(index);
    };
    return _fps_cb_i_s[index];
  }
  
  CB_S_I_S_S _wrapper_callonce_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&)>& cpp_function)
  {
    int index=FuncPoolManager::get_instance().get_cb_s_i_s_s_index();
    while(index<0){
      std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME_FOR_GET_INDEX));
      index=FuncPoolManager::get_instance().get_cb_s_i_s_s_index();
    }
    _cpp_function_cb_s_i_s_s[index]=[cpp_function,index](const std::string& operationID,int code,const std::string& str,const std::string& str2)->void {
      cpp_function(operationID,code,str,str2);
      FuncPoolManager::get_instance().release_cb_s_i_s_s_index(index);
    };
    return _fps_cb_s_i_s_s[index];
  }
  
  CB_S_I_S_S_I _wrapper_callonce_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&,int)>& cpp_function)
  {
    int index=FuncPoolManager::get_instance().get_cb_s_i_s_s_i_index();
    // while loop util get a available index
    while(index<0){
      std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME_FOR_GET_INDEX));
      index=FuncPoolManager::get_instance().get_cb_s_i_s_s_i_index();
    }
    _cpp_function_cb_s_i_s_s_i[index]=[cpp_function,index](const std::string& operationID,int code,const std::string& str,const std::string& str2,int c_int)->void {
      cpp_function(operationID,code,str,str2,c_int);
      FuncPoolManager::get_instance().release_cb_s_i_s_s_i_index(index);
    };
    return _fps_cb_s_i_s_s_i[index];
  }

}



class OpenIMManager
{
public:
  // instance pattern
  static OpenIMManager& GetInstance()
  {
    static OpenIMManager instance;
    return instance;
  }

  //must be called before use sdk
  GoInt8 InitSDK(const std::function<void(int, std::string)>& cCallback,const std::string& operationID,const std::string& config)
  {
    char* operationID_cs=const_cast<char*>(operationID.c_str());
    char* config_cs=const_cast<char*>(config.c_str());
    return init_sdk(_wrapper_cpp_function(cCallback),operationID_cs , config_cs);
  }
  void UnInitSDK(const std::string& operationID){
    char* operationID_cs=const_cast<char*>(operationID.c_str());
    return un_init_sdk(operationID_cs);
  }
  
  // ban default constructor and destructor
  OpenIMManager()=delete
  ~OpenIMManager()=delete

  // // set print
  // void SetPrint(const std::function<void(const std::string&)>& printCallBack);

  // set group listener
  void SetGroupListener(const std::function<void(int,const std::string&)>& groupListenerCallBack);

  // set conversation listener
  void SetConversationListener(const std::function<void(int, const std::string &)>& conversationListenerCallback);

  // set advanced msg listener
  void SetAdvancedMsgListener(const std::function<void(int, const std::string &)>& advancedMsgListenerCallback);

  // set batch msg listener
  void SetBatchMsgListener(const std::function<void(int, const std::string &)>& batchMsgListenerCallback);

  // set user listener
  void SetUserListener(const std::function<void(int, const std::string &)>& userListenerCallback);

  // set friend listener
  void SetFriendListener(const std::function<void(int, const std::string &)>& friendListenerCallback);

  // set custom business listener
  void SetCustomBusinessListener(const std::function<void(int, const std::string &)>& customBusinessListenerCallback);

  // login
  void Login(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& loginCallback, const std::string& operationID, const std::string& uid, const std::string& token);

  // logout
  void Logout(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& logoutCallback, const std::string& operationID);

  // network status changed
  void NetworkStatusChanged(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& networkStatusCallback, const std::string& operationID);

  // get login status
  int GetLoginStatus(const std::string& operationID);

  // get login user
  std::string GetLoginUser();

  // create text message
  std::string CreateTextMessage(const std::string& operationID, const std::string& text);

  // create advanced text message
  std::string CreateAdvancedTextMessage(const std::string& operationID, const std::string& text, const std::string& messageEntityList);

  // create text at message
  std::string CreateTextAtMessage(const std::string& operationID, const std::string& text, const std::string& atUserList, const std::string& atUsersInfo, const std::string& message);

  // create location message
  std::string CreateLocationMessage(const std::string& operationID, const std::string& description, double longitude, double latitude);

  // create custom message
  std::string CreateCustomMessage(const std::string& operationID, const std::string& data, const std::string& extension, const std::string& description);

  // create quote message
  std::string CreateQuoteMessage(const std::string& operationID, const std::string& text, const std::string& message);

  
  // create advanced quote message
  std::string CreateAdvancedQuoteMessage(const std::string& operationID, const std::string& text, const std::string& message, const std::string& messageEntityList);

  // create card message
  std::string CreateCardMessage(const std::string& operationID, const std::string& cardInfo);

  // create video message from full path
  std::string CreateVideoMessageFromFullPath(const std::string& operationID, const std::string& videoFullPath, const std::string& videoType, long long int duration, const std::string& snapshotFullPath);

  // create image message from full path
  std::string CreateImageMessageFromFullPath(const std::string& operationID, const std::string& imageFullPath);

  // create sound message from full path
  std::string CreateSoundMessageFromFullPath(const std::string& operationID, const std::string& soundPath, long long int duration);

  // create file message from full path
  std::string CreateFileMessageFromFullPath(const std::string& operationID, const std::string& fileFullPath, const std::string& fileName);

  // create image message
  std::string CreateImageMessage(const std::string& operationID, const std::string& imagePath);


  // create image message by URL
  std::string CreateImageMessageByURL(const std::string& operationID, const std::string& sourcePicture, const std::string& bigPicture, const std::string& snapshotPicture);

  // create sound message by URL
  std::string CreateSoundMessageByURL(const std::string& operationID, const std::string& soundBaseInfo);

  // create sound message
  std::string CreateSoundMessage(const std::string& operationID, const std::string& soundPath, long long int duration);

  // create video message by URL
  std::string CreateVideoMessageByURL(const std::string& operationID, const std::string& videoBaseInfo);

  // create video message
  std::string CreateVideoMessage(const std::string& operationID, const std::string& videoPath, const std::string& videoType, long long int duration, const std::string& snapshotPath);

  // create file message by URL
  std::string CreateFileMessageByURL(const std::string& operationID, const std::string& fileBaseInfo);

  // create file message
  std::string CreateFileMessage(const std::string& operationID, const std::string& filePath, const std::string& fileName);

  // create merger message
  std::string CreateMergerMessage(const std::string& operationID, const std::string& messageList, const std::string& title, const std::string& summaryList);

  // create face message
  std::string CreateFaceMessage(const std::string& operationID, int index, const std::string& data);

  // create forward message
  std::string CreateForwardMessage(const std::string& operationID, const std::string& m);

  // get all conversation list
  void GetAllConversationList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& getAllConversationListCallback, const std::string& operationID);
  
  // get advanced history message list
  void GetAdvancedHistoryMessageList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& getAdvancedHistoryCallback , const std::string& operationID, const std::string& getMessageOptions);

  // send message
  void SendMessage(const std::function<void(const std::string&, int, const std::string&, const std::string&, int)>& callback, const std::string& operationID, const std::string& message, const std::string& recvID, const std::string& groupID, const std::string& offlinePushInfo);

  // // =====================================================user===============================================
  // //

  // get users info
  void GetUsersInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDs);

  // get users info from server
  void GetUsersInfoFromServer(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDs);

  // set self info
  void SetSelfInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userInfo);

  // get self user info
  void GetSelfUserInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID);

  // update message sender info
  void UpdateMessageSenderInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& nickname, const std::string& faceURL);

  // subscribe users status
  void SubscribeUsersStatus(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDs);


  // unsubscribe users status
  void UnsubscribeUsersStatus(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDs);

  // get subscribe users status
  void GetSubscribeUsersStatus(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID);

  // get user status
  void GetUserStatus(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDs);

  // // =====================================================friend===============================================
  // //

  // get specified friends info
  void GetSpecifiedFriendsInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDList);

  // get friend list
  void GetFriendList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID);

  // get friend list page
  void GetFriendListPage(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, int offset, int count);

  // search friends
  void SearchFriends(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& searchParam);

  // check friend
  void CheckFriend(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDList);

  // add friend
  void AddFriend(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDReqMsg);

  // set friend remark
  void SetFriendRemark(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDRemark);

  // delete friend
  void DeleteFriend(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& friendUserID);

  // get friend application list as recipient
  void GetFriendApplicationListAsRecipient(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID);

  // get friend application list as applicant
  void GetFriendApplicationListAsApplicant(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID);

  // accept friend application
  void AcceptFriendApplication(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDHandleMsg);

  // refuse friend application
  void RefuseFriendApplication(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDHandleMsg);

  // add black
  void AddBlack(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& blackUserID);

  // get black list
  void GetBlackList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID);

  // remove black
  void RemoveBlack(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& removeUserID);


  // // =====================================================group===============================================
  // // 

  // create group
  void CreateGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupReqInfo);

  // join group
  void JoinGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& reqMsg, int joinSource);

  // quit group
  void QuitGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID);

  // dismiss group
  void DismissGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID);

  // change group mute
  void ChangeGroupMute(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, bool isMute);

  // change group member mute
  void ChangeGroupMemberMute(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& userID, int mutedSeconds);

  // SetGroupMemberRoleLevel sets the role level of a group member
  void SetGroupMemberRoleLevel(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& userID, int roleLevel);

  // SetGroupMemberInfo sets the information of a group member
  void SetGroupMemberInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupMemberInfo);

  // GetJoinedGroupList retrieves the list of joined groups
  void GetJoinedGroupList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID);

  // GetSpecifiedGroupsInfo retrieves the information of specified groups
  void GetSpecifiedGroupsInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupIDList);

  // SearchGroups searches for groups
  void SearchGroups(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& searchParam);

  // SetGroupInfo sets the information of a group
  void SetGroupInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupInfo);

  // SetGroupVerification sets the verification mode of a group
  void SetGroupVerification(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, int verification);


  // SetGroupLookMemberInfo sets the member information visibility of a group
  void SetGroupLookMemberInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, int rule);

  // SetGroupApplyMemberFriend sets the friend rule for group applicants
  void SetGroupApplyMemberFriend(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, int rule);

  // GetGroupMemberList retrieves the list of group members
  void GetGroupMemberList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, int filter, int offset, int count);

  // GetGroupMemberOwnerAndAdmin retrieves the owner and admin members of a group
  void GetGroupMemberOwnerAndAdmin(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID);

  // GetGroupMemberListByJoinTimeFilter retrieves the list of group members filtered by join time
  void GetGroupMemberListByJoinTimeFilter(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, int offset, int count, long long int joinTimeBegin, long long int joinTimeEnd, const std::string& filterUserIDList);

  // GetSpecifiedGroupMembersInfo retrieves the information of specified group members
  void GetSpecifiedGroupMembersInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& userIDList);

  // KickGroupMember kicks group members
  void KickGroupMember(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& reason, const std::string& userIDList);

  // TransferGroupOwner transfers the ownership of a group
  void TransferGroupOwner(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& newOwnerUserID);

  // InviteUserToGroup invites users to a group
  void InviteUserToGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& reason, const std::string& userIDList);

  // GetGroupApplicationListAsRecipient retrieves the group application list as a recipient
  void GetGroupApplicationListAsRecipient(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID);

  // GetGroupApplicationListAsApplicant retrieves the group application list as an applicant
  void GetGroupApplicationListAsApplicant(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID);

  // AcceptGroupApplication accepts a group application
  void AcceptGroupApplication(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& fromUserID, const std::string& handleMsg);

  // RefuseGroupApplication refuses a group application
  void RefuseGroupApplication(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& fromUserID, const std::string& handleMsg);

  // SetGroupMemberNickname sets the nickname of a group member
  void SetGroupMemberNickname(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& userID, const std::string& groupMemberNickname);

  // SearchGroupMembers searches for group members
  void SearchGroupMembers(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& searchParam);

  // IsJoinGroup checks if the user has joined a group
  void IsJoinGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID);

};

// // ===================================================== set listener ===============================================
// impl for set listener, this callback function will be keep in memory,until call SetXXXListener again

// for debug
// void OpenIMManager::SetPrint(const std::function<void(const std::string&)>& printCallBack)
// {
//   this->printCallBack = _wrapper_cpp_function(printCallBack);
//   set_print((CB_S)((this->printCallBack).target<void(*)(const std::string&)>()));
// }

void OpenIMManager::SetAdvancedMsgListener(const std::function<void(int, const std::string &)>& advancedMsgListenerCallback)
{
  set_advanced_msg_listener(_wrapper_cpp_function(advancedMsgListenerCallback));
}
void OpenIMManager::SetBatchMsgListener(const std::function<void(int, const std::string &)>& batchMsgListenerCallback)
{
  set_batch_msg_listener(_wrapper_cpp_function(batchMsgListenerCallback));
}
void OpenIMManager::SetConversationListener(const std::function<void(int, const std::string &)>& conversationListenerCallback)
{
  set_conversation_listener(_wrapper_cpp_function(conversationListenerCallback));
}
void OpenIMManager::SetCustomBusinessListener(const std::function<void(int, const std::string &)>& customBusinessListenerCallback)
{
 set_custom_business_listener(_wrapper_cpp_function(customBusinessListenerCallback));
}
void OpenIMManager::SetFriendListener(const std::function<void(int, const std::string &)>& friendListenerCallback)
{
  set_friend_listener(_wrapper_cpp_function(friendListenerCallback));
}
void OpenIMManager::SetGroupListener(const std::function<void(int, const std::string &)>& groupListenerCallback)
{
  set_group_listener(_wrapper_cpp_function(groupListenerCallback));
}
void OpenIMManager::SetUserListener(const std::function<void(int, const std::string &)>& userListenerCallback)
{
  set_user_listener(_wrapper_cpp_function(userListenerCallback));
}

// // ===================================================== CallOnce Callback ===============================================
// callback function arg below will be free after call once, so we need to wrapp it to onetime
// // ===================================================== message ===============================================

// // ===================================================== login logout ===============================================
void OpenIMManager::Login(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& loginCallback, const std::string& operationID, const std::string& uid, const std::string& token)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* uid_cs=const_cast<char*>(uid.c_str());
  char* token_cs=const_cast<char*>(token.c_str());
  login(_wrapper_callonce_cpp_function(loginCallback),operationID_cs,uid_cs,token_cs);
}

void OpenIMManager::Logout(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& logoutCallback, const std::string& operationID)
{
  auto logoutCallback= _wrapper_callonce_cpp_function(logoutCallback);
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  logout((CB_S_I_S_S)((this->logoutCallback).target<void(*)(const std::string&,int,const std::string&,const std::string&)>()),operationID_cs);
}

void OpenIMManager::GetLoginStatus(const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_login_status(operationID_cs);
}

std::string OpenIMManager::GetLoginUser()
{
  char* user=get_login_user();
  std::string user_str(user);
  free(user);
  return get_login_user();
}

void OpenIMManager::NetworkStatusChanged(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& networkStatusCallback, const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  network_status_changed(_wrapper_callonce_cpp_function(networkStatusCallback),operationID_cs);
}


// // ===================================================== message ===============================================
// //

// create text message
std::string OpenIMManager::CreateTextMessage(const std::string& operationID, const std::string& text)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* text_cs=const_cast<char*>(text.c_str());
  char* result_cs=create_text_message(operationID_cs,text_cs);
  std::string result(result_css);
  // release dynamic c string memory
  free(result_cs);
  return result;
}

// create advanced text message
std::string OpenIMManager::CreateAdvancedTextMessage(const std::string& operationID, const std::string& text, const std::string& messageEntityList)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* text_cs=const_cast<char*>(text.c_str());
  char* messageEntityList_cs=const_cast<char*>(messageEntityList.c_str());
  char* result_cs=create_advanced_text_message(operationID_cs,text_cs,messageEntityList_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create text at message
std::string OpenIMManager::CreateTextAtMessage(const std::string& operationID, const std::string& text, const std::string& atUserList, const std::string& atUsersInfo, const std::string& message)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* text_cs=const_cast<char*>(text.c_str());
  char* atUserList_cs=const_cast<char*>(atUserList.c_str());
  char* atUsersInfo_cs=const_cast<char*>(atUsersInfo.c_str());
  char* message_cs=const_cast<char*>(message.c_str());
  char* result_cs=create_text_at_message(operationID_cs,text_cs,atUserList_cs,atUsersInfo_cs,message_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create location message
std::string OpenIMManager::CreateLocationMessage(const std::string& operationID, const std::string& description, double longitude, double latitude)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* description_cs=const_cast<char*>(description.c_str());
  char* result_cs=create_location_message(operationID_cs,description_cs,longitude,latitude);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create custom message
std::string OpenIMManager::CreateCustomMessage(const std::string& operationID, const std::string& data, const std::string& extension, const std::string& description)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* data_cs=const_cast<char*>(data.c_str());
  char* extension_cs=const_cast<char*>(extension.c_str());
  char* description_cs=const_cast<char*>(description.c_str());
  char* result_cs=create_custom_message(operationID_cs,data_cs,extension_cs,description_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create quote message
std::string OpenIMManager::CreateQuoteMessage(const std::string& operationID, const std::string& text, const std::string& message)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* text_cs=const_cast<char*>(text.c_str());
  char* message_cs=const_cast<char*>(message.c_str());
  char* result_cs=create_quote_message(operationID_cs,text_cs,message_cs);
  std::string result(result_css);
  free(result_cs);
  return result;

}

// create advanced quote message
std::string OpenIMManager::CreateAdvancedQuoteMessage(const std::string& operationID, const std::string& text, const std::string& message, const std::string& messageEntityList)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* text_cs=const_cast<char*>(text.c_str());
  char* message_cs=const_cast<char*>(message.c_str());
  char* messageEntityList_cs=const_cast<char*>(messageEntityList.c_str());
  char* result_cs=create_advanced_quote_message(operationID_cs,text_cs,message_cs,messageEntityList_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create card message
std::string OpenIMManager::CreateCardMessage(const std::string& operationID, const std::string& cardInfo)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* cardInfo_cs=const_cast<char*>(cardInfo.c_str());
  char* result_cs=create_card_message(operationID_cs,cardInfo_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create video message from full path
std::string OpenIMManager::CreateVideoMessageFromFullPath(const std::string& operationID, const std::string& videoFullPath, const std::string& videoType, long long int duration, const std::string& snapshotFullPath)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* videoFullPath_cs=const_cast<char*>(videoFullPath.c_str());
  char* videoType_cs=const_cast<char*>(videoType.c_str());
  char* snapshotFullPath_cs=const_cast<char*>(snapshotFullPath.c_str());
  char* result_cs=create_video_message_from_full_path(operationID_cs,videoFullPath_cs,videoType_cs,duration,snapshotFullPath_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create image message from full path
std::string OpenIMManager::CreateImageMessageFromFullPath(const std::string& operationID, const std::string& imageFullPath)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* imageFullPath_cs=const_cast<char*>(imageFullPath.c_str());
  char* result_cs=create_image_message_from_full_path(operationID_cs,imageFullPath_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create sound message from full path  
std::string OpenIMManager::CreateSoundMessageFromFullPath(const std::string& operationID, const std::string& soundPath, long long int duration)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* soundPath_cs=const_cast<char*>(soundPath.c_str());
  char* result_cs=create_sound_message_from_full_path(operationID_cs,soundPath_cs,duration);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create file message from full path
std::string OpenIMManager::CreateFileMessageFromFullPath(const std::string& operationID, const std::string& fileFullPath, const std::string& fileName)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* fileFullPath_cs=const_cast<char*>(fileFullPath.c_str());
  char* fileName_cs=const_cast<char*>(fileName.c_str());
  char* result_cs=create_file_message_from_full_path(operationID_cs,fileFullPath_cs,fileName_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create image message
std::string OpenIMManager::CreateImageMessage(const std::string& operationID, const std::string& imagePath)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* imagePath_cs=const_cast<char*>(imagePath.c_str());
  char* result_cs=create_image_message(operationID_cs,imagePath_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create image message by URL
std::string OpenIMManager::CreateImageMessageByURL(const std::string& operationID, const std::string& sourcePicture, const std::string& bigPicture, const std::string& snapshotPicture)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* sourcePicture_cs=const_cast<char*>(sourcePicture.c_str());
  char* bigPicture_cs=const_cast<char*>(bigPicture.c_str());
  char* snapshotPicture_cs=const_cast<char*>(snapshotPicture.c_str());
  char* result_cs=create_image_message_by_url(operationID_cs,sourcePicture_cs,bigPicture_cs,snapshotPicture_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create sound message by URL
std::string OpenIMManager::CreateSoundMessageByURL(const std::string& operationID, const std::string& soundBaseInfo)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* soundBaseInfo_cs=const_cast<char*>(soundBaseInfo.c_str());
  char* result_cs=create_sound_message_by_url(operationID_cs,soundBaseInfo_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create sound message
std::string OpenIMManager::CreateSoundMessage(const std::string& operationID, const std::string& soundPath, long long int duration)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* soundPath_cs=const_cast<char*>(soundPath.c_str());
  char* result_cs=create_sound_message(operationID_cs,soundPath_cs,duration);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create video message by URL
std::string OpenIMManager::CreateVideoMessageByURL(const std::string& operationID, const std::string& videoBaseInfo)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* videoBaseInfo_cs=const_cast<char*>(videoBaseInfo.c_str());
  char* result_cs=create_video_message_by_url(operationID_cs,videoBaseInfo_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create video message
std::string OpenIMManager::CreateVideoMessage(const std::string& operationID, const std::string& videoPath, const std::string& videoType, long long int duration, const std::string& snapshotPath)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* videoPath_cs=const_cast<char*>(videoPath.c_str());
  char* videoType_cs=const_cast<char*>(videoType.c_str());
  char* snapshotPath_cs=const_cast<char*>(snapshotPath.c_str());
  char* result_cs=create_video_message(operationID_cs,videoPath_cs,videoType_cs,duration,snapshotPath_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create file message by URL
std::string OpenIMManager::CreateFileMessageByURL(const std::string& operationID, const std::string& fileBaseInfo)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* fileBaseInfo_cs=const_cast<char*>(fileBaseInfo.c_str());
  char* result_cs=create_file_message_by_url(operationID_cs,fileBaseInfo_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create file message
std::string OpenIMManager::CreateFileMessage(const std::string& operationID, const std::string& filePath, const std::string& fileName)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* filePath_cs=const_cast<char*>(filePath.c_str());
  char* fileName_cs=const_cast<char*>(fileName.c_str());
  char* result_cs=create_file_message(operationID_cs,filePath_cs,fileName_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create merger message
std::string OpenIMManager::CreateMergerMessage(const std::string& operationID, const std::string& messageList, const std::string& title, const std::string& summaryList)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* messageList_cs=const_cast<char*>(messageList.c_str());
  char* title_cs=const_cast<char*>(title.c_str());
  char* summaryList_cs=const_cast<char*>(summaryList.c_str());
  char* result_cs=create_merger_message(operationID_cs,messageList_cs,title_cs,summaryList_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create face message
std::string OpenIMManager::CreateFaceMessage(const std::string& operationID, int index, const std::string& data)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* data_cs=const_cast<char*>(data.c_str());
  char* result_cs=create_face_message(operationID_cs,index,data_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// create forward message
std::string OpenIMManager::CreateForwardMessage(const std::string& operationID, const std::string& m)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* m_cs=const_cast<char*>(m.c_str());
  char* result_cs=create_forward_message(operationID_cs,m_cs);
  std::string result(result_css);
  free(result_cs);
  return result;
}

// get all conversation list
void OpenIMManager::GetAllConversationList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& getAllConversationListCallback, const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_all_conversation_list(_wrapper_callonce_cpp_function(getAllConversationListCallback),operationID_cs);
}

// get advanced history message list
void OpenIMManager::GetAdvancedHistoryMessageList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& getAdvancedHistoryCallback , const std::string& operationID, const std::string& getMessageOptions)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* getMessageOptions_cs=const_cast<char*>(getMessageOptions.c_str());
  get_advanced_history_message_list(_wrapper_callonce_cpp_function(getAdvancedHistoryCallback),operationID_cs,getMessageOptions_cs);
}

// send message
void SendMessage(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& sendMessageCallback, const std::string& operationID, const std::string& message)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* message_cs=const_cast<char*>(message.c_str());
  send_message(_wrapper_callonce_cpp_function(sendMessageCallback),operationID_cs,message_cs);
}

// // ===================================================== user ===============================================
// //

// get users info
void OpenIMManager::GetUserInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& userIDList)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* userIDList_cs=const_cast<char*>(userIDList.c_str());
  get_users_info(_wrapper_callonce_cpp_function(getUserInfoCallback),operationID_cs,userIDList_cs);
}

// get users info from server
void OpenIMManager::GetUsersInfoFromServer(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, int type, const std::string& userIDList)
{
  auto getUsersInfoFromServerCallback= _wrapper_callonce_cpp_function(callback);
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* userIDList_cs=const_cast<char*>(userIDList.c_str());
  get_users_info_from_server((CB_S_I_S_S)((getUsersInfoFromServerCallback).target<void(*)(const std::string&,int,const std::string&,const std::string&)>()),operationID_cs,type,userIDList_cs);
}

// set self info
void OpenIMManager::SetSelfInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& selfInfo)
{
  char* selfInfo_cs=const_cast<char*>(selfInfo.c_str());
  set_self_info(_wrapper_callonce_cpp_function(callback),selfInfo_cs);
}

// get self user info
void OpenIMManager::GetSelfUserInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_self_user_info(_wrapper_callonce_cpp_function(callback),operationID_cs);
}

// update message sender info
void OpenIMManager::UpdateMessageSenderInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& message)
{
  char* message_cs=const_cast<char*>(message.c_str());
  update_message_sender_info(_wrapper_callonce_cpp_function(callback),message_cs);
}

// subscribe users status
void OpenIMManager::SubscribeUsersStatus(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& userIDList)
{
  char* userIDList_cs=const_cast<char*>(userIDList.c_str());
  subscribe_users_status(_wrapper_callonce_cpp_function(callback),userIDList_cs);
}

// unsubscribe users status
void OpenIMManager::UnsubscribeUsersStatus(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& userIDList)
{
  char* userIDList_cs=const_cast<char*>(userIDList.c_str());
  unsubscribe_users_status(_wrapper_callonce_cpp_function(callback),userIDList_cs);
}

// get subscribed users status
void OpenIMManager::GetSubscribedUsersStatus(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_subscribe_users_status(_wrapper_callonce_cpp_function(callback),operationID_cs);
}

// get user status
void OpenIMManager::GetUserStatus(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& userID)
{
  char* userID_cs=const_cast<char*>(userID.c_str());
  get_user_status(_wrapper_callonce_cpp_function(callback),userID_cs);
}

// // ===================================================== friend ===============================================
// //

// get specified friends info
void OpenIMManager::GetSpecifiedFriendsInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& userIDList)
{
  char* userIDList_cs=const_cast<char*>(userIDList.c_str());
  get_specified_friends_info(_wrapper_callonce_cpp_function(callback),userIDList_cs);
}

// get friend list
void OpenIMManager::GetFriendList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_friend_list(_wrapper_callonce_cpp_function(callback),operationID_cs);
}

// get friend list page
void OpenIMManager::GetFriendListPage(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, int offset, int count)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_friend_list_page(_wrapper_callonce_cpp_function(callback),operationID_cs,offset,count);
}

// search friends
void OpenIMManager::SearchFriends(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& searchParam)
{
  char* searchParam_cs=const_cast<char*>(searchParam.c_str());
  search_friends(_wrapper_callonce_cpp_function(callback),searchParam_cs);
}

// check friend
void OpenIMManager::CheckFriend(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& userID)
{
  char* userID_cs=const_cast<char*>(userID.c_str());
  check_friend(_wrapper_callonce_cpp_function(callback),userID_cs);
}

// add friend
void OpenIMManager::AddFriend(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& friendInfo, const std::string& addFriendExtraInfo)
{
  char* friendInfo_cs=const_cast<char*>(friendInfo.c_str());
  char* addFriendExtraInfo_cs=const_cast<char*>(addFriendExtraInfo.c_str());
  add_friend(_wrapper_callonce_cpp_function(callback),friendInfo_cs,addFriendExtraInfo_cs);
}

// set friend remark
void OpenIMManager::SetFriendRemark(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& userID, const std::string& remark)
{
  char* userID_cs=const_cast<char*>(userID.c_str());
  char* remark_cs=const_cast<char*>(remark.c_str());
  set_friend_remark(_wrapper_callonce_cpp_function(callback),userID_cs,remark_cs);
}

// delete friend
void OpenIMManager::DeleteFriend(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& userID, const std::string& deleteFriendExtraInfo)
{
  char* userID_cs=const_cast<char*>(userID.c_str());
  char* deleteFriendExtraInfo_cs=const_cast<char*>(deleteFriendExtraInfo.c_str());
  delete_friend(_wrapper_callonce_cpp_function(callback),userID_cs,deleteFriendExtraInfo_cs);
}

// get friend application list as recipant
void OpenIMManager::GetFriendApplicationListAsRecipant(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_friend_application_list_as_applicant(_wrapper_callonce_cpp_function(callback),operationID_cs);
}

// get friend application list as applicant
void OpenIMManager::GetFriendApplicationListAsApplicant(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_friend_application_list_as_applicant(_wrapper_callonce_cpp_function(callback),operationID_cs);
}

// accept friend application
void OpenIMManager::AcceptFriendApplication(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& friendApplicationID, const std::string& extraInfo)
{
  char* friendApplicationID_cs=const_cast<char*>(friendApplicationID.c_str());
  char* extraInfo_cs=const_cast<char*>(extraInfo.c_str());
  accept_friend_application(_wrapper_callonce_cpp_function(callback),friendApplicationID_cs,extraInfo_cs)
}

// refuse friend application
void OpenIMManager::RefuseFriendApplication(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& friendApplicationID, const std::string& extraInfo)
{
  char* friendApplicationID_cs=const_cast<char*>(friendApplicationID.c_str());
  char* extraInfo_cs=const_cast<char*>(extraInfo.c_str());
  refuse_friend_application(_wrapper_callonce_cpp_function(callback),friendApplicationID_cs,extraInfo_cs);
}

// add black
void OpenIMManager::AddBlack(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& userIDList)
{
  char* userIDList_cs=const_cast<char*>(userIDList.c_str());
  add_black(_wrapper_callonce_cpp_function(callback),userIDList_cs);
}

// get black list
void OpenIMManager::GetBlackList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_black_list(_wrapper_callonce_cpp_function(callback),operationID_cs);
}

// remove black
void OpenIMManager::RemoveBlack(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& userIDList)
{
  char* userIDList_cs=const_cast<char*>(userIDList.c_str());
  remove_black(_wrapper_callonce_cpp_function(callback),userIDList_cs);
}

// // ===================================================== group ===============================================
// // 

// create group
void OpenIMManager::CreateGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupReqInfo)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* groupReqInfo_cs=const_cast<char*>(groupReqInfo.c_str());
  create_group(_wrapper_callonce_cpp_function(callback),operationID_cs,groupReqInfo_cs);
}

// join group
void OpenIMManager::JoinGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, const std::string& reqMsg, int joinSource)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  char* groupID_cs=const_cast<char*>(groupID.c_str());
  char* reqMsg_cs=const_cast<char*>(reqMsg.c_str());
  join_group(_wrapper_callonce_cpp_function(callback),operationID_cs,groupID_cs,reqMsg_cs,joinSource);
}

// quit group
void OpenIMManager::QuitGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupID, const std::string& reqMsg)
{
  char* groupID_cs=const_cast<char*>(groupID.c_str());
  char* reqMsg_cs=const_cast<char*>(reqMsg.c_str());
  quit_group(_wrapper_callonce_cpp_function(callback),groupID_cs,reqMsg_cs);
}

// dismiss group
void OpenIMManager::DismissGroup(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupID, const std::string& reqMsg)
{
  char* groupID_cs=const_cast<char*>(groupID.c_str());
  char* reqMsg_cs=const_cast<char*>(reqMsg.c_str());
  dismiss_group(_wrapper_callonce_cpp_function(callback),groupID_cs,reqMsg_cs);
}

// change group mute
void OpenIMManager::ChangeGroupMute(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupID, bool mute)
{
  char* groupID_cs=const_cast<char*>(groupID.c_str());
  change_group_mute(_wrapper_callonce_cpp_function(callback),groupID_cs,mute);
}

// change group member mute
void OpenIMManager::ChangeGroupMemberMute(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupID, const std::string& memberID, bool mute)
{
  char* groupID_cs=const_cast<char*>(groupID.c_str());
  char* memberID_cs=const_cast<char*>(memberID.c_str());
  change_group_member_mute(_wrapper_callonce_cpp_function(callback),groupID_cs,memberID_cs,mute);
}


// set the role level of a group member
void OpenIMManager::SetGroupMemberRoleLevel(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupID, const std::string& memberID, int roleLevel)
{
  char* groupID_cs=const_cast<char*>(groupID.c_str());
  char* memberID_cs=const_cast<char*>(memberID.c_str());
  set_group_member_role_level(_wrapper_callonce_cpp_function(callback),groupID_cs,memberID_cs,roleLevel);
}

// set the information of a group member
void OpenIMManager::SetGroupMemberInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupID, const std::string& memberID, const std::string& memberInfo)
{
  char* groupID_cs=const_cast<char*>(groupID.c_str());
  char* memberID_cs=const_cast<char*>(memberID.c_str());
  char* memberInfo_cs=const_cast<char*>(memberInfo.c_str());
  set_group_member_info(_wrapper_callonce_cpp_function(callback),groupID_cs,memberID_cs,memberInfo_cs);
}

// get Joined Group List
void OpenIMManager::GetJoinedGroupList(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID)
{
  char* operationID_cs=const_cast<char*>(operationID.c_str());
  get_joined_group_list(_wrapper_callonce_cpp_function(callback),operationID_cs);
}

// get specified groups info
void OpenIMManager::GetSpecifiedGroupsInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupIDList)
{
  char* groupIDList_cs=const_cast<char*>(groupIDList.c_str());
  get_specified_friends_info(_wrapper_callonce_cpp_function(callback),userIDList_cs);
}

// search groups
void OpenIMManager::SearchGroups(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& searchParam)
{
  char* searchParam_cs=const_cast<char*>(searchParam.c_str());
  search_groups(_wrapper_callonce_cpp_function(callback),searchParam_cs);
}

// set group info
void OpenIMManager::SetGroupInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupInfo)
{
  char* groupInfo_cs=const_cast<char*>(groupInfo.c_str());
  set_group_info(_wrapper_callonce_cpp_function(callback),groupInfo_cs);
}

// set group verification
void OpenIMManager::SetGroupVerification(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupID, int type)
{
  char* groupID_cs=const_cast<char*>(groupID.c_str());
  set_group_verification(_wrapper_callonce_cpp_function(callback),groupID_cs,type);
}

// set group look member info
void OpenIMManager::SetGroupMemberInfo(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& groupID, bool lookMemberInfo)
{
  char* groupID_cs=const_cast<char*>(groupID.c_str());
  set_group_member_info(_wrapper_callonce_cpp_function(callback),groupID_cs,lookMemberInfo);
}
