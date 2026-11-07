// rea decompile_all
// name: FUN_10006cff4
// address: 0x10006cff4
// body: available
// range: 0x10006cff4-0x10006d0b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006d0b4 to 0x1000c2840 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006cff4(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  
  pvVar2 = (void *)*param_1;
  uVar3 = *(undefined8 *)((long)pvVar2 + 0xa8);
  lVar4 = *(long *)((long)pvVar2 + 0xb0);
  if ((param_2 & 1) == 0) {
    FUN_10001fc18((long)pvVar2 + 0x98,&DAT_100104428,&DAT_1000d4880);
    FUN_10001fc18((long)pvVar2 + 0xa0,&DAT_100104430,&DAT_1000d4888);
    puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
    *(undefined8 *)(lVar4 + 0x68) = uVar3;
    *(undefined **)(lVar4 + 0x70) = puVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    FUN_10001fc18((long)pvVar2 + 0x98,&DAT_100104428,&DAT_1000d4880);
    FUN_10001fc18((long)pvVar2 + 0xa0,&DAT_100104430,&DAT_1000d4888);
    puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
    *(undefined8 *)(lVar4 + 0x68) = uVar3;
    *(undefined **)(lVar4 + 0x70) = puVar1;
    _swift_bridgeObjectRelease(*(undefined8 *)((long)pvVar2 + 0xa8));
  }
  _free(pvVar2);
  return;
}

