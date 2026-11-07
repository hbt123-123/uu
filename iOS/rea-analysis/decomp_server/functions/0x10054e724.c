// rea decompile_all
// name: FUN_10054e724
// address: 0x10054e724
// body: available
// range: 0x10054e724-0x10054e837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054e724(float *param_1,ulong param_2)

{
  char *pcVar1;
  float *pfVar2;
  undefined1 uVar3;
  long unaff_x20;
  char *pcVar4;
  float fVar5;
  
  pfVar2 = param_1;
  FUN_100560bb8();
  pcVar4 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar4 == pcVar1) || (*pcVar4 != ':')) {
    uVar3 = 0;
LAB_10054e7c8:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,pfVar2,0,0);
    *(undefined1 *)pfVar2 = uVar3;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
    FUN_100560bb8();
    FUN_100561a58();
    if ((param_2 & 1) == 0) {
      fVar5 = (float)(double)pfVar2;
    }
    else {
      pcVar4 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar4 != pcVar1) && (*pcVar4 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
      }
      pfVar2 = (float *)&DAT_100aaa100;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100561bf0();
      if (((ulong)pfVar2 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar4;
        FUN_100561c9c();
        if (((ulong)pfVar2 >> 0x20 & 1) != 0) {
          uVar3 = 1;
          goto LAB_10054e7c8;
        }
        fVar5 = SUB84(pfVar2,0);
      }
      else {
        fVar5 = NAN;
      }
    }
    *param_1 = fVar5;
  }
  return;
}

