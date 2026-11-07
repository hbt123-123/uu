// rea decompile_all
// name: FUN_1000709c8
// address: 0x1000709c8
// body: available
// range: 0x1000709c8-0x100070bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000709c8(undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  code *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 *local_70;
  
  uVar3 = 0;
  local_70 = param_1;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,PTR___sSYTL_1000f0360,PTR___s8RawValueSYTl_1000f02c0);
  lVar11 = *(long *)(uVar3 - 8);
  uVar6 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_88 = auStack_a0 + -uVar6;
  lVar9 = (long)local_88 - uVar6;
  uStack_80 = param_6;
  __sSY8rawValue03RawB0QzvgTj(lVar9,param_3,param_6);
  local_90 = *(code **)(param_7 + 0x10);
  uVar6 = uVar3;
  local_78 = param_7;
  (*local_90)();
  pcVar7 = *(code **)(lVar11 + 8);
  (*pcVar7)(lVar9,uVar3);
  pcVar10 = *(code **)(param_4 + 0x10);
  uVar4 = param_3;
  lVar9 = param_4;
  (*pcVar10)();
  if (uVar6 == uVar4 && param_7 == lVar9) {
    _swift_bridgeObjectRelease(param_7);
    _swift_bridgeObjectRelease(lVar9);
  }
  else {
    local_98 = pcVar10;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar6,param_7,uVar4,lVar9,0);
    _swift_bridgeObjectRelease(param_7);
    _swift_bridgeObjectRelease(lVar9);
    puVar1 = local_88;
    if ((uVar6 & 1) == 0) {
      __sSY8rawValue03RawB0QzvgTj(local_88,param_3,uStack_80);
      uVar6 = uVar3;
      lVar9 = local_78;
      (*local_90)(uVar3,local_78);
      (*pcVar7)(puVar1,uVar3);
      (*local_98)(param_3,param_4);
      puVar2 = local_70;
      uVar5 = *local_70;
      _swift_isUniquelyReferenced_nonNull_native(uVar5);
      uVar8 = *puVar2;
      FUN_10009b71c(param_3,param_4,uVar6,lVar9,uVar5);
      _swift_bridgeObjectRelease(lVar9);
      *puVar2 = uVar8;
    }
  }
  return;
}

