// rea decompile_all
// name: FUN_10038e3b8
// address: 0x10038e3b8
// body: available
// range: 0x10038e3b8-0x10038e6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038e4cc to 0x100380e48 FUN_100380e48 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038e3b8(long param_1,ID param_2,ID param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong *puVar2;
  int iVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  int iVar8;
  long local_88;
  undefined1 auStack_80 [28];
  char local_64;
  byte local_63;
  ulong local_62;
  ulong *local_5a;
  char local_4a;
  byte local_49;
  ulong local_48;
  undefined1 *puVar7;
  
  IVar4 = objc_stub::length(param_3);
  if (IVar4 != 0) {
    if (param_2 == 0) {
      FUN_1003822c8(param_1,param_3);
      return 1;
    }
    IVar4 = NSString::class((ID)&_OBJC_CLASS___NSString);
    IVar4 = objc_stub::isKindOfClass_(param_2,IVar4);
    iVar8 = (int)param_4;
    if ((IVar4 & 1) == 0) {
      IVar4 = NSData::class((ID)&_OBJC_CLASS___NSData);
      IVar5 = objc_stub::isKindOfClass_(param_2,IVar4);
      IVar4 = param_2;
      uVar1 = IVar5 & 1;
    }
    else {
      IVar4 = objc_stub::dataUsingEncoding_(param_2,4);
      uVar1 = IVar4;
    }
    if (uVar1 != 0) {
      if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
        thunk_FUN_10037e9f0(&local_4a,IVar4,1);
        FUN_100388d7c(param_1,&local_4a,param_3,1);
      }
      else {
        thunk_FUN_10037e9f0(&local_4a,IVar4,1);
        uVar1 = (ulong)local_49;
        if (local_4a != '\0') {
          uVar1 = local_48;
        }
        if (uVar1 != 0) {
          uVar6 = uVar1;
          FUN_10039280c(uVar1);
          thunk_FUN_10037e7cc(&local_64,(int)uVar6 + (int)uVar1 + 4);
          uVar1 = (ulong)local_63;
          puVar2 = &local_62;
          if (local_64 != '\0') {
            uVar1 = local_62;
            puVar2 = local_5a;
          }
          FUN_10037d560(auStack_80,puVar2,uVar1);
          puVar7 = auStack_80;
          FUN_10037d90c(puVar7,&local_4a);
          iVar3 = (int)puVar7;
          if (iVar8 == 0) {
            iVar3 = 0;
          }
          else {
            FUN_10038aeac();
            iVar3 = iVar3 + iVar8;
          }
          FUN_10037d604(auStack_80,iVar3);
          FUN_10037ec2c(&local_4a,&local_64);
          thunk_FUN_10037edac(&local_64);
        }
        FUN_100388d7c(param_1,&local_4a,param_3,0);
      }
LAB_10038e47c:
      thunk_FUN_10037edac(&local_4a);
      return param_1;
    }
    IVar4 = NSDate::class((ID)&_OBJC_CLASS___NSDate);
    IVar4 = objc_stub::isKindOfClass_(param_2,IVar4);
    if ((int)IVar4 != 0) {
      objc_stub::timeIntervalSince1970(param_2);
      FUN_100380e48(param_1,param_3,param_4);
      return param_1;
    }
    local_88 = 0;
    IVar4 = NSKeyedArchiver::archivedDataWithRootObject_requiringSecureCoding_error_
                      ((ID)&_OBJC_CLASS___NSKeyedArchiver,param_2,0,&local_88);
    if (local_88 == 0) {
      IVar5 = NSKeyedArchiver::length(IVar4);
      if (IVar5 != 0) {
        if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
          thunk_FUN_10037e9f0(&local_4a,IVar4,1);
          FUN_100388d7c(param_1,&local_4a,param_3,0);
        }
        else {
          thunk_FUN_10037e9f0(&local_4a,IVar4,1);
          if (local_4a == '\0') {
            local_48 = (ulong)local_49;
          }
          if (local_48 != 0) {
            thunk_FUN_10037e7cc(&local_64,local_48 + 4);
            uVar1 = (ulong)local_63;
            puVar2 = &local_62;
            if (local_64 != '\0') {
              uVar1 = local_62;
              puVar2 = local_5a;
            }
            FUN_10037d560(auStack_80,puVar2,uVar1);
            puVar7 = auStack_80;
            FUN_10037d94c(puVar7,&local_4a);
            iVar3 = (int)puVar7;
            if (iVar8 == 0) {
              iVar3 = 0;
            }
            else {
              FUN_10038aeac();
              iVar3 = iVar3 + iVar8;
            }
            FUN_10037d604(auStack_80,iVar3);
            FUN_10037ec2c(&local_4a,&local_64);
            thunk_FUN_10037edac(&local_64);
          }
          FUN_100388d7c(param_1,&local_4a,param_3,0);
        }
        goto LAB_10038e47c;
      }
    }
    else {
      FUN_100386734(3,"MMKV_OSX.cpp","set",0xad,"fail to archive: %@");
    }
  }
  return 0;
}

