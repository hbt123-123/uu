// rea decompile_all
// name: FUN_10054eda4
// address: 0x10054eda4
// body: available
// range: 0x10054eda4-0x10054eeb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054eda4(undefined8 *param_1,ulong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  long unaff_x20;
  char *pcVar3;
  undefined8 *puVar4;
  
  puVar4 = param_1;
  FUN_100560bb8();
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar3 == pcVar1) || (*pcVar3 != ':')) {
    uVar2 = 0;
LAB_10054ee48:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar4,0,0);
    *(undefined1 *)puVar4 = uVar2;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_100560bb8();
    FUN_100561a58();
    if ((param_2 & 1) != 0) {
      pcVar3 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar3 != pcVar1) && (*pcVar3 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
      }
      puVar4 = (undefined8 *)&DAT_100aaa100;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100561bf0();
      if (((ulong)puVar4 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar3;
        FUN_100561c9c();
        if (((ulong)puVar4 >> 0x20 & 1) != 0) {
          uVar2 = 1;
          goto LAB_10054ee48;
        }
        puVar4 = (undefined8 *)(double)SUB84(puVar4,0);
      }
      else {
        puVar4 = (undefined8 *)0x7ff8000000000000;
      }
    }
    *param_1 = puVar4;
  }
  return;
}

