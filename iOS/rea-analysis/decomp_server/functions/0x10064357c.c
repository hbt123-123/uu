// rea decompile_all
// name: FUN_10064357c
// address: 0x10064357c
// body: available
// range: 0x10064357c-0x100643677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100643628) */

void FUN_10064357c(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong *unaff_x20;
  
  if ((unaff_x20[4] & 1) != 0) {
    puVar1 = (undefined *)0xffffffffffffffff;
    FUN_100643f90();
    FUN_10065fc5c();
    FUN_100645d2c();
    uVar4 = 0;
    uVar3 = 2;
    if (*(long *)(puVar1 + 0x10) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    goto LAB_100643658;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((char)unaff_x20[2] == '\0') {
    uVar2 = *unaff_x20 | unaff_x20[1];
joined_r0x000100643640:
    if (uVar2 == 0) {
      uVar4 = 0;
      uVar3 = 0;
      uVar5 = 0;
      goto LAB_100643658;
    }
  }
  else if ((char)unaff_x20[2] != '\x01') {
    uVar2 = *(ulong *)(unaff_x20[3] + 0x10);
    goto joined_r0x000100643640;
  }
  uVar3 = 0;
  uVar5 = 0;
  uVar4 = 1;
LAB_100643658:
  *param_1 = uVar4;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}

