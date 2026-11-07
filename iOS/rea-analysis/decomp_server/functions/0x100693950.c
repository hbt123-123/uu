// rea decompile_all
// name: FUN_100693950
// address: 0x100693950
// body: available
// range: 0x100693950-0x100693a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100693950(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  size_t sVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  bool bVar6;
  int iVar7;
  wchar_t *pwVar8;
  ulong uVar9;
  wchar_t *pwVar10;
  
  uVar9 = *(ulong *)(param_1 + 2);
  pwVar4 = *(wchar_t **)param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_1 + 0x17);
    pwVar4 = param_1;
  }
  sVar2 = *(size_t *)(param_2 + 2);
  pwVar5 = *(wchar_t **)param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    sVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    pwVar5 = param_2;
  }
  if (sVar2 == 0) {
    bVar6 = true;
  }
  else {
    pwVar1 = pwVar4 + uVar9;
    pwVar10 = pwVar1;
    if ((long)sVar2 <= (long)uVar9) {
      wVar3 = *pwVar5;
      pwVar8 = pwVar4;
      do {
        pwVar10 = pwVar1;
        if (((0xfffffffffffffffe < uVar9 - sVar2) ||
            (pwVar8 = _wmemchr(pwVar8,wVar3,(uVar9 - sVar2) + 1), pwVar8 == (wchar_t *)0x0)) ||
           (iVar7 = _wmemcmp(pwVar8,pwVar5,sVar2), pwVar10 = pwVar8, iVar7 == 0)) break;
        pwVar8 = pwVar8 + 1;
        uVar9 = (long)pwVar1 - (long)pwVar8 >> 2;
        pwVar10 = pwVar1;
      } while ((long)sVar2 <= (long)uVar9);
    }
    bVar6 = pwVar10 != pwVar1 && pwVar10 == pwVar4;
  }
  return bVar6;
}

