// rea decompile_all
// name: FUN_10051b3cc
// address: 0x10051b3cc
// body: available
// range: 0x10051b3cc-0x10051b4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010051b4b0) */

undefined1  [16] FUN_10051b3cc(undefined8 ***param_1,ulong param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined8 **local_40;
  ulong uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  pppuVar1 = &local_40;
  puVar4 = PTR___sSSN_1009957f8;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar1,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
             PTR___sSSSTsWP_100995820);
  if (((ulong)puVar4 >> 0x3c & 1) != 0) {
    puVar5 = puVar4;
    FUN_10051b73c();
    _swift_bridgeObjectRelease(puVar4);
    puVar4 = puVar5;
  }
  if (((ulong)puVar4 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar5 = puVar4;
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      uVar3 = (uint)puVar5;
      pppuVar2 = pppuVar1;
    }
    else {
      uVar3 = (uint)pppuVar1;
      pppuVar2 = (undefined8 ***)(((ulong)puVar4 & 0xfffffffffffffff) + 0x20);
    }
  }
  else {
    uVar3 = (byte)((ulong)puVar4 >> 0x38) & 0xf;
    uStack_38 = (ulong)puVar4 & 0xffffffffffffff;
    pppuVar2 = &local_40;
    local_40 = pppuVar1;
  }
  FUN_10000c3b8();
  _swift_bridgeObjectRelease(puVar4);
  auVar6._8_4_ = uVar3 & 1;
  auVar6._0_8_ = pppuVar2;
  auVar6._12_4_ = 0;
  return auVar6;
}

