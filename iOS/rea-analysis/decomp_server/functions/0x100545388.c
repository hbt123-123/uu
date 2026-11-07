// rea decompile_all
// name: FUN_100545388
// address: 0x100545388
// body: available
// range: 0x100545388-0x100545437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100545388(char *param_1,char *param_2,char *param_3,char *param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  lVar1 = 0;
  if (param_1 != (char *)0x0) {
    lVar1 = (long)param_2 - (long)param_1;
  }
  if (param_3 == (char *)0x0) {
    if (lVar1 != 0) {
      return false;
    }
  }
  else if (lVar1 != (long)param_4 - (long)param_3) {
    return false;
  }
  do {
    if (param_1 == (char *)0x0) {
      cVar5 = '\0';
      bVar3 = true;
joined_r0x0001005453cc:
      if (param_3 != (char *)0x0) goto LAB_1005453d0;
LAB_1005453f8:
      cVar6 = '\0';
      bVar2 = true;
      if (bVar3) {
        return true;
      }
    }
    else {
      if (param_1 != param_2) {
        bVar3 = false;
        cVar5 = *param_1;
        param_1 = param_1 + 1;
        goto joined_r0x0001005453cc;
      }
      cVar5 = '\0';
      bVar3 = true;
      param_1 = param_2;
      if (param_3 == (char *)0x0) goto LAB_1005453f8;
LAB_1005453d0:
      bVar4 = param_3 != param_4;
      if (bVar4) {
        cVar6 = *param_3;
        param_3 = param_3 + 1;
      }
      else {
        cVar6 = '\0';
        param_3 = param_4;
      }
      bVar2 = !bVar4;
      if (bVar3) {
        return !bVar4;
      }
    }
    if (cVar5 != cVar6) {
      bVar2 = true;
    }
    if (bVar2) {
      return false;
    }
  } while( true );
}

