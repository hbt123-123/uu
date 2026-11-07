// rea decompile_all
// name: FUN_1004f96fc
// address: 0x1004f96fc
// body: available
// range: 0x1004f96fc-0x1004f97f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004f96fc(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_5 + -8);
  puVar2 = &stack0xffffffffffffffb0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(puVar2,param_2,param_5);
  uVar1 = (ulong)param_3 & 0xffffffffffff;
  if (((ulong)param_4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    param_4 = &DAT_d000000000000013;
    param_3 = puVar2;
    FUN_10051940c(puVar2,&DAT_d000000000000013,0x80000001008bc810,param_5,param_6);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
  }
  FUN_10055d238(puVar2,param_3,param_4,param_1,param_5,param_6);
  _swift_bridgeObjectRelease(param_4);
  (**(code **)(lVar3 + 8))(puVar2,param_5);
  return;
}

