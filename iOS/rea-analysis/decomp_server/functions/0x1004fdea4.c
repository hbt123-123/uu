// rea decompile_all
// name: FUN_1004fdea4
// address: 0x1004fdea4
// body: available
// range: 0x1004fdea4-0x1004fdf7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fdea4(undefined1 *param_1)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined1 uVar6;
  
  lVar4 = unaff_x20[1];
  uVar2 = lVar4 - 1;
  if (lVar4 < 1) {
    uVar6 = 1;
  }
  else {
    pcVar3 = (char *)*unaff_x20;
    param_1 = (undefined1 *)(long)*pcVar3;
    if (-1 < (long)param_1) {
      *unaff_x20 = pcVar3 + 1;
LAB_1004fded0:
      unaff_x20[1] = uVar2;
      return;
    }
    if (lVar4 == 1) {
      uVar6 = 3;
    }
    else {
      param_1 = (undefined1 *)((ulong)param_1 & 0x7f);
      pcVar3 = pcVar3 + 2;
      uVar6 = 3;
      uVar5 = 7;
      do {
        param_1 = (undefined1 *)
                  (((ulong)(byte)pcVar3[-1] & 0x7f) << (uVar5 & 0x3f) | (ulong)param_1);
        if (-1 < pcVar3[-1]) {
          uVar2 = uVar2 - 1;
          *unaff_x20 = pcVar3;
          goto LAB_1004fded0;
        }
        if (uVar2 < 2) break;
        pcVar3 = pcVar3 + 1;
        uVar2 = uVar2 - 1;
        bVar1 = uVar5 < 0x39;
        uVar5 = uVar5 + 7;
      } while (bVar1);
    }
  }
  FUN_100506290();
  _swift_allocError(&DAT_1009cdf18,param_1,0,0);
  *param_1 = uVar6;
  _swift_willThrow();
  return;
}

