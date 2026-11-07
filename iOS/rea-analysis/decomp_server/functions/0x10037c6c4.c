// rea decompile_all
// name: thunk_FUN_10037c5d4
// address: 0x10037c6c4
// body: available
// range: 0x10037c6c4-0x10037c6c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong thunk_FUN_10037c5d4(ulong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar5;
  int iVar6;
  ulong uVar4;
  
  uVar4 = param_1;
  FUN_10037c3b8();
  if ((int)(uint)uVar4 < 0) {
    uVar3 = (uint)uVar4 & 0x7f;
    uVar4 = param_1;
    FUN_10037c3b8();
    uVar2 = (int)uVar4 << 7;
    if ((int)uVar4 < 0) {
      uVar3 = uVar2 & 0x3f80 | uVar3;
      uVar4 = param_1;
      FUN_10037c3b8();
      uVar2 = (int)uVar4 << 0xe;
      if ((int)uVar4 < 0) {
        uVar3 = uVar2 & 0x1fc000 | uVar3;
        uVar4 = param_1;
        FUN_10037c3b8();
        uVar2 = (int)uVar4 << 0x15;
        if ((int)uVar4 < 0) {
          uVar4 = param_1;
          FUN_10037c3b8();
          uVar5 = (ulong)(uVar2 & 0xfe00000 | (int)uVar4 << 0x1c | uVar3);
          if (-1 < (int)uVar4) {
            return uVar5;
          }
          iVar6 = 5;
          do {
            uVar4 = param_1;
            FUN_10037c3b8();
            if (-1 < (int)uVar4) {
              return uVar5;
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          uVar1 = 0x10;
          ___cxa_allocate_exception(0x10);
          FUN_10037c5a8();
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar1,PTR_typeinfo_1009965c0,PTR__invalid_argument_100995100);
        }
      }
    }
    uVar4 = (ulong)(uVar2 | uVar3);
  }
  return uVar4;
}

