// rea decompile_all
// name: FUN_1005082f4
// address: 0x1005082f4
// body: available
// range: 0x1005082f4-0x10050838b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005082f4(int param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar2 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar2;
  }
  uVar4 = param_1 << 1 ^ param_1 >> 0x1f;
  lVar2 = 4;
  if (uVar4 >> 0x1c != 0) {
    lVar2 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < uVar4) {
    lVar3 = lVar2;
  }
  if (uVar4 >> 0xe == 0) {
    lVar3 = 2;
  }
  lVar2 = 1;
  if (0x7f < uVar4) {
    lVar2 = lVar3;
  }
  if (!SCARRY8(*unaff_x20,lVar2 + lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar2 + lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10050838c);
  (*pcVar5)();
}

