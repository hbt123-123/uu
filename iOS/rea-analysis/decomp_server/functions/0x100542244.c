// rea decompile_all
// name: FUN_100542244
// address: 0x100542244
// body: available
// range: 0x100542244-0x1005422cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100542244(char *param_1,char *param_2,char *param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  
  do {
    if (param_3 == (char *)0x0) {
      cVar4 = '\0';
      bVar2 = true;
joined_r0x00010054226c:
      if (param_1 != (char *)0x0) goto LAB_100542270;
LAB_100542298:
      cVar5 = '\0';
      bVar1 = true;
      if (bVar2) {
        return true;
      }
    }
    else {
      if (param_3 != param_4) {
        bVar2 = false;
        cVar4 = *param_3;
        param_3 = param_3 + 1;
        goto joined_r0x00010054226c;
      }
      cVar4 = '\0';
      bVar2 = true;
      param_3 = param_4;
      if (param_1 == (char *)0x0) goto LAB_100542298;
LAB_100542270:
      bVar3 = param_1 != param_2;
      if (bVar3) {
        cVar5 = *param_1;
        param_1 = param_1 + 1;
      }
      else {
        cVar5 = '\0';
        param_1 = param_2;
      }
      bVar1 = !bVar3;
      if (bVar2) {
        return !bVar3;
      }
    }
    if (cVar4 != cVar5) {
      bVar1 = true;
    }
    if (bVar1) {
      return false;
    }
  } while( true );
}

