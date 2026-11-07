// rea decompile_all
// name: FUN_100694fd4
// address: 0x100694fd4
// body: available
// range: 0x100694fd4-0x100695097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100694fd4(char *param_1,char *param_2,char *param_3,char *param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  
  pcVar1 = param_1 + (param_8 - param_9) + 1;
  do {
    pcVar3 = param_2;
    if (pcVar1 == param_1) {
LAB_100695078:
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = pcVar3;
      return auVar5;
    }
    uVar2 = param_5;
    FUN_100695098(param_5,(long)*param_1,(long)*param_3);
    pcVar3 = param_1;
    pcVar4 = param_3;
    if ((int)uVar2 != 0) {
      do {
        pcVar4 = pcVar4 + 1;
        if (pcVar4 == param_4) {
          param_2 = param_1 + param_9;
          pcVar3 = param_1;
          goto LAB_100695078;
        }
        uVar2 = param_5;
        FUN_100695098(param_5,(long)pcVar3[1],(long)*pcVar4);
        pcVar3 = pcVar3 + 1;
      } while ((uVar2 & 1) != 0);
    }
    param_1 = param_1 + 1;
  } while( true );
}

