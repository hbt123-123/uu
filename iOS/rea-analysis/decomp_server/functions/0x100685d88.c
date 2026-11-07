// rea decompile_all
// name: FUN_100685d88
// address: 0x100685d88
// body: available
// range: 0x100685d88-0x100685e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100685e54 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100685d88(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x150);
    *(undefined8 *)((long)pvVar2 + 0x78) = *(undefined8 *)((long)pvVar2 + 0xb0);
    *(undefined8 *)((long)pvVar2 + 0x70) = *(undefined8 *)((long)pvVar2 + 0xa8);
    *(undefined8 *)((long)pvVar2 + 0x88) = *(undefined8 *)((long)pvVar2 + 0xc0);
    *(undefined8 *)((long)pvVar2 + 0x80) = *(undefined8 *)((long)pvVar2 + 0xb8);
    *(undefined8 *)((long)pvVar2 + 0x98) = *(undefined8 *)((long)pvVar2 + 0xd0);
    *(undefined8 *)((long)pvVar2 + 0x90) = *(undefined8 *)((long)pvVar2 + 200);
    *(undefined4 *)((long)pvVar2 + 0x9f) = *(undefined4 *)((long)pvVar2 + 0xd7);
    _swift_bridgeObjectRetain(uVar1);
    FUN_1006858d0((long)pvVar2 + 0x70,uVar1);
  }
  else {
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x150);
    *(undefined8 *)((long)pvVar2 + 0x40) = *(undefined8 *)((long)pvVar2 + 0xb0);
    *(undefined8 *)((long)pvVar2 + 0x38) = *(undefined8 *)((long)pvVar2 + 0xa8);
    *(undefined8 *)((long)pvVar2 + 0x50) = *(undefined8 *)((long)pvVar2 + 0xc0);
    *(undefined8 *)((long)pvVar2 + 0x48) = *(undefined8 *)((long)pvVar2 + 0xb8);
    *(undefined8 *)((long)pvVar2 + 0x60) = *(undefined8 *)((long)pvVar2 + 0xd0);
    *(undefined8 *)((long)pvVar2 + 0x58) = *(undefined8 *)((long)pvVar2 + 200);
    *(undefined4 *)((long)pvVar2 + 0x67) = *(undefined4 *)((long)pvVar2 + 0xd7);
    _swift_bridgeObjectRetain(uVar1);
    FUN_10068e538((long)pvVar2 + 0x38,(long)pvVar2 + 0x118);
    FUN_1006858d0((long)pvVar2 + 0x38,uVar1);
    *(undefined8 *)((long)pvVar2 + 0xe8) = *(undefined8 *)((long)pvVar2 + 0xb0);
    *(undefined8 *)((long)pvVar2 + 0xe0) = *(undefined8 *)((long)pvVar2 + 0xa8);
    *(undefined8 *)((long)pvVar2 + 0xf8) = *(undefined8 *)((long)pvVar2 + 0xc0);
    *(undefined8 *)((long)pvVar2 + 0xf0) = *(undefined8 *)((long)pvVar2 + 0xb8);
    *(undefined8 *)((long)pvVar2 + 0x108) = *(undefined8 *)((long)pvVar2 + 0xd0);
    *(undefined8 *)((long)pvVar2 + 0x100) = *(undefined8 *)((long)pvVar2 + 200);
    *(undefined4 *)((long)pvVar2 + 0x10f) = *(undefined4 *)((long)pvVar2 + 0xd7);
    FUN_10068e548((long)pvVar2 + 0xe0);
  }
  _free(pvVar2);
  return;
}

