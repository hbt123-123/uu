// rea decompile_all
// name: FUN_10004cd9c
// address: 0x10004cd9c
// body: available
// range: 0x10004cd9c-0x10004cedf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004cd9c(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10004cedc);
    (*pcVar1)();
  }
  uVar8 = (uint)(param_4 >> 0x20);
  uVar7 = uVar8 >> 0x1e;
  uVar6 = param_3 >> 0x20;
  if (uVar8 >> 0x1e < 2) {
    uVar4 = param_4 >> 0x30 & 0xff;
    if (uVar7 != 0) {
      uVar4 = uVar6;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = (long)(int)param_3;
    }
  }
  else if (uVar7 == 2) {
    uVar4 = *(ulong *)(param_3 + 0x18);
    uVar5 = *(ulong *)(param_3 + 0x10);
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
  }
  uVar2 = uVar5;
  FUN_1001f82b4(uVar5,uVar4,param_3,param_4);
  uVar8 = uVar8 >> 0x1e;
  if ((param_2 == 0) || (param_2 <= uVar2)) {
    FUN_1001f8250(uVar5,param_2,param_3,param_4);
    lVar3 = 0;
    if (uVar8 < 2) {
      uVar6 = uVar5;
      if (uVar8 != 0) goto LAB_10004ce88;
    }
    else if (uVar8 != 3) goto LAB_10004ce7c;
  }
  else if (uVar8 < 2) {
    if (uVar7 == 0) {
      lVar3 = 0;
      uVar5 = param_4 >> 0x30 & 0xff;
      goto LAB_10004ce94;
    }
LAB_10004ce88:
    lVar3 = (long)(int)param_3;
    uVar5 = uVar6;
  }
  else {
    if (uVar7 != 2) {
      uVar5 = 0;
      lVar3 = 0;
      goto LAB_10004ce94;
    }
    uVar5 = *(ulong *)(param_3 + 0x18);
LAB_10004ce7c:
    lVar3 = *(long *)(param_3 + 0x10);
  }
  if ((long)uVar5 < lVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10004cee0);
    (*pcVar1)();
  }
LAB_10004ce94:
  __s10Foundation4DataV15_RepresentationOyACSnySiGcig(lVar3,uVar5,param_3,param_4);
  FUN_100006cdc(param_3,param_4);
  *param_1 = lVar3;
  param_1[1] = uVar5;
  return;
}

