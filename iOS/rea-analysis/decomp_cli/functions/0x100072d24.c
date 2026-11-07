// rea decompile_all
// name: FUN_100072d24
// address: 0x100072d24
// body: available
// range: 0x100072d24-0x100072e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100072e14) */

ulong FUN_100072d24(undefined8 ***param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 **local_50;
  ulong uStack_48;
  
  local_50 = param_1;
  uStack_48 = param_2;
  _swift_bridgeObjectRetain(param_2);
  pppuVar1 = &local_50;
  puVar3 = PTR___sSSN_1000f02f8;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar1,PTR___sSSN_1000f02f8,PTR___sSSs25LosslessStringConvertiblesWP_1000f0328,
             PTR___sSSSTsWP_1000f0310);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100071468();
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      pppuVar2 = pppuVar1;
    }
    else {
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
  }
  else {
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &local_50;
    local_50 = pppuVar1;
  }
  (*param_4)();
  _swift_bridgeObjectRelease(puVar3);
  return (ulong)pppuVar2 & 0xffffffff | ((ulong)pppuVar2 >> 0x20 & 1) << 0x20;
}

