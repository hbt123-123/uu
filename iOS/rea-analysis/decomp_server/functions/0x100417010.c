// rea decompile_all
// name: FUN_100417010
// address: 0x100417010
// body: available
// range: 0x100417010-0x10041709f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100417010(undefined8 *param_1)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x30);
  if (((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 || (uVar1 & 0x2000000000000000) == 0)
  {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar1 = 0xc000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = uVar1 & 0xdfffffffffffffff;
    FUN_10012ac6c(uVar4,uVar5,uVar2,uVar3);
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  *(int *)(param_1 + 2) = (int)uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  return;
}

