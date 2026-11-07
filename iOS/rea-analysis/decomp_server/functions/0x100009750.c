// rea decompile_all
// name: FUN_100009750
// address: 0x100009750
// body: available
// range: 0x100009750-0x1000097e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100009750(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  _swift_beginAccess(param_2 + 0x20,puVar2,0x20,0);
  lVar3 = *(long *)(param_2 + 0x20);
  if ((*(long *)(lVar3 + 0x10) == 0) || (FUN_1001a2cd4(), ((ulong)puVar2 & 1) == 0)) {
    param_1[1] = 0xf000000000000000;
    *param_1 = 0;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_3 * 0x10);
    uVar5 = puVar1[1];
    uVar4 = *puVar1;
    param_1[1] = uVar5;
    *param_1 = uVar4;
    FUN_100008184(uVar4,uVar5);
  }
  _swift_endAccess(auStack_48);
  return;
}

