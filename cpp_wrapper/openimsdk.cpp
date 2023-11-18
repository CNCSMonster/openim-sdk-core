
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



namespace {
  // wrapp CB_S
  std::function<void(char*)> _wrapper_cpp_function(const std::function<void(const std::string&)>& cpp_function) {
    return [cpp_function](char* c_str){
      cpp_function(c_str);
    };
  }
  // wrapp CB_I_S
  std::function<void(int,char*)> _wrapper_cpp_function(const std::function<void(int,const std::string&)>& cpp_function)
  {
    return [cpp_function](int code ,char* c_str)->void {
      cpp_function(code,c_str);
    };
  }
  // wrapp CB_S_I_S_S
  std::function<void(char*,int,char*,char*)> _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&)>& cpp_function)
  {
    return [cpp_function](char* operationID,int code,char* c_str,char* c_str2) -> void {
      cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2));
    };
  }
  // wrapp CB_S_I_S_S_I
  std::function<void(char*,int,char*,char*,int)> _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&,int)>& cpp_function)
  {
    return [cpp_function](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
      cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
    };
  }

  template<typename Func> 
  struct CallOnceWrapper {
    std::function<Func> f;
  };
  // wrapp function to onetime
  // wrapp CB_S to CallOnce
  std::function<void(char*)> _wrapper_callonce_cpp_function(const std::function<void(const std::string&)>& cpp_function) {
    CallOnceWrapper* callonceWrapper =new CallOnceWrapper();
    callonceWrapper->f=_wrapper_cpp_function(cpp_function);
    return [callonceWrapper](char* c_str){
      callonceWrapper->f(c_str);
      delete callonceWrapper;
    };
  }
  // wrapp CB_I_S to CallOnce
  std::function<void(int,char*)> _wrapper_callonce_cpp_function(const std::function<void(int,const std::string&)>& cpp_function)
  {
    CallOnceWrapper callonceWrapper =new CallOnceWrapper();
    callonceWrapper->f=_wrapper_cpp_function(cpp_function);
    return [callonceWrapper](int code ,char* c_str)->void {
      callonceWrapper->f(code,c_str);
      delete callonceWrapper;
    };
  }
  // wrapp CB_S_I_S_S to CallOnce
  std::function<void(char*,int,char*,char*)> _wrapper_callonce_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&)>& cpp_function)
  {
    CallOnceWrapper callonceWrapper =new CallOnceWrapper();
    callonceWrapper->f=_wrapper_cpp_function(cpp_function);
    return [callonceWrapper](char* operationID,int code,char* c_str,char* c_str2) -> void {
      callonceWrapper->f(std::string(operationID),code,std::string(c_str),std::string(c_str2));
      delete callonceWrapper;
    };
  }
  // wrapp CB_S_I_S_S_I to CallOnce
  std::function<void(char*,int,char*,char*,int)> _wrapper_callonce_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&,int)>& cpp_function)
  {
    CallOnceWrapper callonceWrapper =new CallOnceWrapper();
    callonceWrapper->f=_wrapper_cpp_function(cpp_function);
    return [callonceWrapper](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
      callonceWrapper->f(std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
      delete callonceWrapper;
    };
  }
}


class OpenIMManager
{
private:
  std::function<void(int,char*)> init_sdk_callback;
  std::function<void(const std::string&)> print_callback;
  std::function<void(int,const std::string&)> group_listener_callback;
  std::function<void(int,const std::string&)> conversation_listener_callback;
  std::function<void(int,const std::string&)> advanced_msg_listener_callback;
  std::function<void(int,const std::string&)> batch_msg_listener_callback;
  std::function<void(int,const std::string&)> user_listener_callback;
  std::function<void(int,const std::string&)> friend_listener_callback;
  std::function<void(int,const std::string&)> custom_business_listener_callback;


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
    this->init_sdk_callback=_wrapper_cpp_function(cCallback);
    return init_sdk((CB_I_S)(this->init_sdk_callback.target<void(*)(int,char *)>()),operationID_cs , config_cs);
  }
  void UnInitSDK(const std::string& operationID){
    char* operationID_cs=const_cast<char*>(operationID.c_str());
    return un_init_sdk(operationID_cs);
  }
  
  // ban default constructor and destructor
  OpenIMManager()=delete
  ~OpenIMManager()=delete

  // set print
  void SetPrint(const std::function<void(const std::string&)>& printCallBack);

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
  void ChangeGroupMute(const std::function<void(const std::string&, int, const std::string&, const std::string&)>& callback, const std::string& operationID, const std::string& groupID, int isMute);

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
void OpenIMManager::SetPrint(const std::function<void(const std::string&)>& printCallBack)
{
  this->printCallBack = _wrapper_cpp_function(printCallBack);
  set_print((CB_S)((this->printCallBack).target<void(*)(const std::string&)>()));
}
void OpenIMManager::SetAdvancedMsgListener(const std::function<void(int, const std::string &)>& advancedMsgListenerCallback)
{
  this->advancedMsgListenerCallback = _wrapper_cpp_function(advancedMsgListenerCallback);
  set_advanced_msg_listener((CB_I_S)((this->advancedMsgListenerCallback).target<void(*)(int,const std::string&)>()));
}
void OpenIMManager::SetBatchMsgListener(const std::function<void(int, const std::string &)>& batchMsgListenerCallback)
{
  this->batchMsgListenerCallback = _wrapper_cpp_function(batchMsgListenerCallback);
  set_batch_msg_listener((CB_I_S)((this->batchMsgListenerCallback).target<void(*)(int,const std::string&)>()));
}
void OpenIMManager::SetConversationListener(const std::function<void(int, const std::string &)>& conversationListenerCallback)
{
  this->conversationListenerCallback = _wrapper_cpp_function(conversationListenerCallback);
  set_conversation_listener((CB_I_S)((this->conversationListenerCallback).target<void(*)(int,const std::string&)>()));
}
void OpenIMManager::SetCustomBusinessListener(const std::function<void(int, const std::string &)>& customBusinessListenerCallback)
{
  this->customBusinessListenerCallback = _wrapper_cpp_function(customBusinessListenerCallback);
  set_custom_business_listener((CB_I_S)((this->customBusinessListenerCallback).target<void(*)(int,const std::string&)>()));
}
void OpenIMManager::SetFriendListener(const std::function<void(int, const std::string &)>& friendListenerCallback)
{
  this->friendListenerCallback = _wrapper_cpp_function(friendListenerCallback);
  set_friend_listener((CB_I_S)((this->friendListenerCallback).target<void(*)(int,const std::string&)>()));
}
void OpenIMManager::SetGroupListener(const std::function<void(int, const std::string &)>& groupListenerCallback)
{
  this->groupListenerCallback = _wrapper_cpp_function(groupListenerCallback);
  set_group_listener((CB_I_S)((this->groupListenerCallback).target<void(*)(int,const std::string&)>()));
}
void OpenIMManager::SetUserListener(const std::function<void(int, const std::string &)>& userListenerCallback)
{
  this->userListenerCallback = _wrapper_cpp_function(userListenerCallback);
  set_user_listener((CB_I_S)((this->userListenerCallback).target<void(*)(int,const std::string&)>()));
}




