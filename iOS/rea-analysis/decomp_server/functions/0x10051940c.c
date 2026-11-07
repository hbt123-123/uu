// rea decompile_all
// name: FUN_10051940c
// address: 0x10051940c
// body: available
// range: 0x10051940c-0x100519567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10051940c(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_68 [24];
  long local_50;
  long local_48;
  
  local_50 = param_4;
  local_48 = param_5;
  FUN_1000efc08(auStack_68);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  uVar2 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar2 = param_3 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_3);
  if ((uVar2 != 0) && (uVar2 = param_2, uVar4 = param_3, FUN_100518b1c(), uVar4 != 0)) {
    if ((uVar2 == 0x2f) && (uVar4 == 0xe100000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
      goto LAB_1005194dc;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar2 & 1) != 0) goto LAB_1005194dc;
  }
  __sSS6appendyySSF(0x2f,0xe100000000000000);
LAB_1005194dc:
  puVar3 = auStack_68;
  FUN_10003f030(puVar3,local_50);
  _swift_getDynamicType();
  lVar5 = local_48;
  (**(code **)(local_48 + 0x18))();
  _swift_bridgeObjectRetain(param_3);
  __sSS6appendyySSF(puVar3,lVar5);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(lVar5);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  FUN_10003f094(auStack_68);
  return auVar1;
}

