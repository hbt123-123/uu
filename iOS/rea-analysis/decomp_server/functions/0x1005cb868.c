// rea decompile_all
// name: FUN_1005cb868
// address: 0x1005cb868
// body: available
// range: 0x1005cb868-0x1005cbe6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005cbe68 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1005cb868(long param_1,byte *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ID self;
  undefined1 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long lVar16;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [8];
  long local_c8;
  uint local_bc;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  ulong local_80 [3];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar14 = *param_3;
  puVar3 = &DAT_100aad5f8;
  FUN_100004bb4(&DAT_100aad5f8,&DAT_10083eb90);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_d0 + -extraout_x8;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar2 = _TtC12NRDSecureLog12SecureLogger::configuration;
  lVar15 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_bc = (uint)*param_2;
  FUN_1005cb768(param_1,(long)param_3 + _TtC12NRDSecureLog12SecureLogger::configuration);
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  lVar6 = 0;
  FUN_1005c8c98();
  local_c8 = (long)*(int *)(lVar6 + 0x14);
  lVar7 = lVar6;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_80[0] = 0;
  IVar5 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (IVar5,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                     lVar7,1,0,local_80);
  if ((int)IVar5 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_80[0]);
    _swift_willThrow(0);
  }
  else {
    FUN_1005c8dc8(param_1 + *(int *)(lVar6 + 0x28),puVar9);
    puVar8 = puVar9;
    (**(code **)(lVar16 + 0x30))(puVar9,1,lVar4);
    if ((int)puVar8 == 1) {
      FUN_1005cdf54(puVar9);
    }
    else {
      (**(code **)(lVar16 + 0x20))(lVar15,puVar9,lVar4);
      self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      IVar5 = self;
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      local_80[0] = 0;
      IVar5 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                        (self,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                         IVar5,1,0,local_80);
      if ((IVar5 & 1) == 0) {
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_80[0]);
        _swift_willThrow(0);
        (**(code **)(lVar16 + 8))(lVar15,lVar4);
        goto LAB_1005cbdcc;
      }
      (**(code **)(lVar16 + 8))(lVar15,lVar4);
    }
    if (DAT_100aad4f8 != -1) {
      _swift_once(&DAT_100aad4f8,FUN_1005cb710);
    }
    IVar5 = DAT_100aad738;
    _objc_msgSend(DAT_100aad738,"lock");
    if (DAT_100aad500 != -1) {
      _swift_once(&DAT_100aad500,FUN_1005cb740);
    }
    puVar10 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x18));
    uVar1 = *puVar10;
    uVar13 = puVar10[1];
    _swift_beginAccess(&DAT_100aad740,local_80,0x21,0);
    _swift_bridgeObjectRetain(uVar13);
    puVar9 = auStack_90;
    FUN_1005cd378(puVar9,uVar1,uVar13);
    _swift_endAccess(local_80);
    _swift_bridgeObjectRelease(local_88);
    pcVar12 = "unlock";
    puVar10 = (undefined8 *)_objc_msgSend(IVar5,"unlock");
    if (((ulong)puVar9 & 1) == 0) {
      FUN_1005c958c();
      _swift_allocError(&DAT_1009d8730,puVar10,0,0);
      *puVar10 = uVar1;
      puVar10[1] = uVar13;
      _swift_willThrow();
      _swift_bridgeObjectRetain(uVar13);
    }
    else {
      local_80[0] = local_80[0] & 0xffffffffffffff00;
      __s10Foundation3URLV4pathSSvg(local_c8);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar15 + -0x20) = param_1;
      *(char *)(lVar15 + -0x18) = (char)local_bc;
      *(ulong **)(lVar15 + -0x10) = local_80;
      pcVar11 = FUN_1005cdf9c;
      FUN_1005cad70();
      _swift_bridgeObjectRelease();
      if ((char)local_80[0] == '\x01') {
        FUN_1005c958c();
        _swift_allocError(&DAT_1009d8730,pcVar12,0,0);
        pcVar12[8] = '\a';
        pcVar12[9] = '\0';
        pcVar12[10] = '\0';
        pcVar12[0xb] = '\0';
        pcVar12[0xc] = '\0';
        pcVar12[0xd] = '\0';
        pcVar12[0xe] = '\0';
        pcVar12[0xf] = '\0';
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        pcVar12[4] = '\0';
        pcVar12[5] = '\0';
        pcVar12[6] = '\0';
        pcVar12[7] = '\0';
        _swift_willThrow();
        _objc_msgSend(IVar5,"lock");
        _swift_beginAccess(&DAT_100aad740,local_80,0x21,0);
        FUN_1005cdc28(uVar1,uVar13);
        _swift_endAccess(local_80);
        _swift_bridgeObjectRelease(uVar13);
        _objc_msgSend(IVar5,"unlock");
      }
      else {
        if (pcVar11 != (code *)0x0) {
          FUN_1005cbe6c(param_1);
          *(code **)((long)param_3 + _TtC12NRDSecureLog12SecureLogger::handle) = pcVar11;
          goto LAB_1005cbdf8;
        }
        _objc_msgSend(IVar5,"lock");
        _swift_beginAccess(&DAT_100aad740,local_80,0x21,0);
        FUN_1005cdc28(uVar1,uVar13);
        _swift_endAccess(local_80);
        _swift_bridgeObjectRelease(uVar13);
        puVar10 = (undefined8 *)_objc_msgSend(IVar5,"unlock");
        FUN_1005c958c();
        _swift_allocError(&DAT_1009d8730,puVar10,0,0);
        puVar10[1] = 8;
        *puVar10 = 0;
      }
      _swift_willThrow();
    }
  }
LAB_1005cbdcc:
  FUN_1005cbe6c(param_1);
  FUN_1005cbe6c((long)param_3 + lVar2);
  _swift_deallocPartialClassInstance
            (param_3,lVar14,*(undefined4 *)(*param_3 + 0x30),*(undefined2 *)(*param_3 + 0x34));
LAB_1005cbdf8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_3;
}

