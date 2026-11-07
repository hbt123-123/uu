// rea decompile_all
// name: FUN_1005cca68
// address: 0x1005cca68
// body: available
// range: 0x1005cca68-0x1005cccff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cca68(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,uint param_11,undefined4 param_12,
                  ulong param_13)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  ulong uStack_70;
  
  uVar3 = (ulong)param_11;
  uVar1 = *(ulong *)(unaff_x20 + _TtC12NRDSecureLog12SecureLogger::handle);
  FUN_1005ce95c();
  if ((uVar1 & 1) != 0) {
    (*param_1)();
    local_78 = local_78 & 0xffffffffffffff00;
    (*(code *)PTR____chkstk_darwin_100995498)();
    _swift_bridgeObjectRetain_n(param_4,2);
    _swift_bridgeObjectRetain_n(param_6,2);
    _swift_bridgeObjectRetain_n(param_8,2);
    _swift_retain_n();
    FUN_100152adc(param_13,&stack0xffffffffffffff20,uVar1,uVar3);
    if ((param_13 & 1) == 0) {
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRetain(param_6);
      _swift_bridgeObjectRetain(param_8);
      _swift_retain();
      FUN_1005cae3c(uVar1,uVar3,param_3,param_4,param_5,param_6,param_7,param_8);
      puVar2 = param_6;
      puVar4 = param_4;
    }
    else {
      local_88 = 0;
      uStack_80 = 0xe100000000000000;
      local_98 = 0x305c;
      uStack_90 = 0xe200000000000000;
      local_78 = uVar1;
      uStack_70 = uVar3;
      FUN_1005c95cc();
      puVar2 = &local_88;
      puVar4 = &local_98;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (puVar2,puVar4,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRetain(param_6);
      _swift_bridgeObjectRetain(param_8);
      _swift_retain();
      FUN_1005cae3c(puVar2,puVar4,param_3,param_4,param_5,param_6,param_7,param_8);
      _swift_bridgeObjectRelease(param_6);
      puVar2 = param_4;
    }
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_release_n();
    _swift_bridgeObjectRelease_n(param_8,2);
  }
  return;
}

