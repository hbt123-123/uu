// rea decompile_all
// name: FUN_10066a048
// address: 0x10066a048
// body: available
// range: 0x10066a048-0x10066a25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066a048(long *param_1,long param_2,undefined1 *param_3,long param_4,long param_5,
                  ulong param_6,undefined8 param_7)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  double *pdVar7;
  undefined *puVar8;
  undefined1 uVar9;
  double dVar10;
  
  if (param_4 < 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10066a250);
    (*pcVar3)();
  }
  uVar4 = 0;
  FUN_100668800(0);
  _swift_allocObject();
  FUN_100668564(param_2,param_7,uVar4);
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar9 = 0;
    goto LAB_10066a18c;
  }
  if ((param_6 & 1) != 0) {
    uVar2 = (uint)param_7 >> 6 & 3;
    if (uVar2 == 0) {
      plVar5 = (long *)(&DAT_10084c350 + (long)(char)param_7 * 8);
    }
    else if (uVar2 == 1) {
      uVar2 = (uint)param_7 & 0x3f;
      if (6 < uVar2) {
        param_5 = 0x40;
        goto LAB_10066a11c;
      }
      plVar5 = (long *)(&DAT_10084c318 + (ulong)uVar2 * 8);
    }
    else {
      plVar5 = (long *)(&DAT_10084c2f0 + ((long)(char)param_7 ^ 0x1fffffffffffff80U) * 8);
    }
    param_5 = *plVar5;
  }
LAB_10066a11c:
  cVar1 = *(char *)(param_2 + 0x18);
  uVar6 = (ulong)cVar1;
  uVar2 = (uint)(int)cVar1 >> 6 & 3;
  if (uVar2 == 0) {
    puVar8 = &DAT_10084c2d0;
LAB_10066a168:
    pdVar7 = (double *)(puVar8 + uVar6 * 8);
LAB_10066a16c:
    dVar10 = *pdVar7;
  }
  else {
    if (uVar2 != 1) {
      uVar6 = uVar6 ^ 0x1fffffffffffff80;
      puVar8 = &DAT_10084c270;
      goto LAB_10066a168;
    }
    uVar2 = (int)cVar1 & 0x3f;
    if (uVar2 < 7) {
      pdVar7 = (double *)(&DAT_10084c298 + (ulong)uVar2 * 8);
      goto LAB_10066a16c;
    }
    dVar10 = 64.0;
  }
  if ((double)param_5 <= dVar10 * 4294967295.0) {
    dVar10 = (double)(long)((double)param_5 / dVar10);
    if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10066a254);
      (*pcVar3)();
    }
    if (-9.223372036854778e+18 < dVar10) {
      if (dVar10 < 9.223372036854776e+18) {
        *param_1 = (long)param_3;
        param_1[1] = param_4;
        param_1[2] = (long)dVar10;
        param_1[3] = param_5;
        param_1[4] = param_2;
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10066a25c);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10066a258);
    (*pcVar3)();
  }
  uVar9 = 1;
LAB_10066a18c:
  _swift_bridgeObjectRelease();
  FUN_10066a25c();
  _swift_allocError(&DAT_1009e4fa0,param_3,0,0);
  *param_3 = uVar9;
  _swift_willThrow();
  _swift_release(param_2);
  return;
}

