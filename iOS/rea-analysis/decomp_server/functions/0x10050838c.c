// rea decompile_all
// name: FUN_10050838c
// address: 0x10050838c
// body: available
// range: 0x10050838c-0x10050845b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050838c(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar3 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar3 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar3;
  }
  uVar4 = param_1 << 1 ^ param_1 >> 0x3f;
  if (uVar4 < 0x80) {
    lVar3 = 1;
    goto LAB_100508440;
  }
  if ((long)uVar4 < 0) {
    lVar3 = 10;
    goto LAB_100508440;
  }
  if (uVar4 >> 0x23 == 0) {
    if (0x1fffff < uVar4) {
      lVar3 = 4;
LAB_100508434:
      uVar4 = uVar4 >> 0x1c;
      goto joined_r0x00010050841c;
    }
    lVar3 = 2;
    if (uVar4 < 0x4000) goto LAB_100508440;
  }
  else {
    if (uVar4 >> 0x31 != 0) {
      uVar4 = uVar4 >> 0x1c;
      lVar3 = 8;
      goto LAB_100508434;
    }
    lVar3 = 6;
    uVar4 = uVar4 >> 0x2a;
joined_r0x00010050841c:
    if (uVar4 == 0) goto LAB_100508440;
  }
  lVar3 = lVar3 + 1;
LAB_100508440:
  if (!SCARRY8(*unaff_x20,lVar3 + lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar3 + lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10050845c);
  (*pcVar2)();
}

