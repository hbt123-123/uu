// rea decompile_all
// name: FUN_1003e74bc
// address: 0x1003e74bc
// body: available
// range: 0x1003e74bc-0x1003e788b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e74bc(void)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ID IVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [16];
  long alStack_b0 [2];
  undefined1 auStack_a0 [16];
  ID aIStack_90 [2];
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  FUN_1005cac3c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar3 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(IVar3 - 8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a89298 != -1) {
    _swift_once(&DAT_100a89298,FUN_1003b2174);
  }
  puVar4 = &DAT_100b36850;
  IVar6 = IVar3;
  FUN_10021bec0();
  __s10Foundation3URLV25deletingLastPathComponentACyF(lVar11);
  __s10Foundation3URLV4pathSSvg();
  (**(code **)(lVar13 + 8))(lVar11,IVar3);
  puVar7 = puVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar6,puVar4);
  _swift_bridgeObjectRelease();
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar7);
  pcVar8 = "initializeMMKV:groupDir:logLevel:";
  IVar3 = MMKV::initializeMMKV_groupDir_logLevel_
                    ((ID)&objc::class_t::MMKV,"initializeMMKV:groupDir:logLevel:",IVar6,(ID)puVar4,1
                    );
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  local_70 = 0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x11);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0x4b4d4d2074696e49;
  local_68 = 0xef203a7365522056;
  __sSS6appendyySSF(IVar3,pcVar8);
  uVar1 = local_68;
  __s10Foundation5NSLogyySS_s7CVarArg_pdtF(local_70,local_68,PTR___swiftEmptyArrayStorage_100995ea0)
  ;
  _swift_bridgeObjectRelease(uVar1);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(ID *)(lVar11 + -0x10) = IVar3;
  *(char **)(lVar11 + -8) = pcVar8;
  (**(code **)(lVar12 + 0x68))(puVar10,2,lVar2);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar3 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar13 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    puVar5 = puVar10;
    FUN_1005cc2b8();
    if (((ulong)puVar5 & 1) == 0) {
      _swift_release(lVar13);
    }
    else {
      IVar6 = 0xd000000000000085;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000085,0x80000001008b4db0);
      pcVar9 = "lastPathComponent";
      local_78 = lVar11;
      IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(code **)(lVar11 + -0x30) = FUN_1003e7bc8;
      *(long *)(lVar11 + -0x28) = lVar11 + -0x20;
      *(undefined8 *)(lVar11 + -0x50) = 0xe400000000000000;
      *(undefined8 *)(lVar11 + -0x48) = 0x45;
      FUN_1005cc010(FUN_1003a85e4,lVar11 + -0x40,puVar10,0x65746f6d65525555,0xe800000000000000,IVar6
                    ,pcVar9,0x564b4d4d);
      _swift_release(lVar13);
      _swift_bridgeObjectRelease(pcVar9);
    }
  }
  _objc_msgSend(IVar3,"unlock");
  _swift_bridgeObjectRelease(pcVar8);
  (**(code **)(lVar12 + 8))(puVar10,lVar2);
  return;
}

