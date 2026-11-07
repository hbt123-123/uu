// rea decompile_all
// name: FUN_1005cc2dc
// address: 0x1005cc2dc
// body: available
// range: 0x1005cc2dc-0x1005cc4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cc2dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b0 [16];
  ulong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  
  local_78 = local_78 & 0xffffffffffffff00;
  local_a0 = &local_78;
  _swift_bridgeObjectRetain_n(param_6,2);
  _swift_bridgeObjectRetain_n(param_8,2);
  _swift_retain_n(param_9,2);
  pcVar1 = FUN_1001326cc;
  FUN_100152adc(FUN_1001326cc,auStack_b0,param_3,param_4);
  if (((ulong)pcVar1 & 1) == 0) {
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    _swift_retain(param_9);
    FUN_1005cb274(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_12,
                  param_2);
    puVar2 = param_8;
    puVar3 = param_6;
  }
  else {
    local_88 = 0;
    uStack_80 = 0xe100000000000000;
    local_98 = 0x305c;
    uStack_90 = 0xe200000000000000;
    local_78 = param_3;
    uStack_70 = param_4;
    FUN_1005c95cc();
    puVar2 = &local_88;
    puVar3 = &local_98;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar2,puVar3,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,
               pcVar1,pcVar1,pcVar1);
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    _swift_retain(param_9);
    FUN_1005cb274(param_1,puVar2,puVar3,param_5,param_6,param_7,param_8,param_9,param_10,param_12,
                  param_2);
    _swift_bridgeObjectRelease(param_8);
    puVar2 = param_6;
  }
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(puVar3);
  _swift_bridgeObjectRelease(param_8);
  _swift_bridgeObjectRelease(param_6);
  _swift_release_n(param_9,2);
  return;
}

