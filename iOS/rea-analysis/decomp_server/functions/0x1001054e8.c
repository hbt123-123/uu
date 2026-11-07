// rea decompile_all
// name: FUN_1001054e8
// address: 0x1001054e8
// body: available
// range: 0x1001054e8-0x100105617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001055ac to 0x1001054c8 FUN_1001054c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010010554c) */
/* WARNING: Removing unreachable block (ram,0x000100105560) */
/* WARNING: Removing unreachable block (ram,0x0001001055e0) */

void FUN_1001054e8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(DAT_100b360a8 + 0x38);
  _swift_retain(uVar3);
  FUN_10019aad8(unaff_x22 + 0x48,uVar1,uVar4);
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  _swift_release(uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar2[1] = *(undefined8 *)(unaff_x22 + 0x50);
  *puVar2 = uVar7;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  puVar2[5] = uVar3;
  puVar2[4] = uVar4;
  puVar2[6] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001001055fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

