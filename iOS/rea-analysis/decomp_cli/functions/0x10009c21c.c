// rea decompile_all
// name: FUN_10009c21c
// address: 0x10009c21c
// body: available
// range: 0x10009c21c-0x10009c39b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009c21c(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long *unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = *unaff_x20;
  uVar5 = unaff_x20[1];
  FUN_10009f444(param_2,param_3,param_4 & 0x1ff,lVar2,uVar5);
  uVar10 = 0;
  uVar11 = 0;
  if ((param_3 & 1) == 0) {
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c388);
      (*pcVar3)();
    }
    uVar8 = *(ulong *)(lVar2 + 0x10);
    if (uVar8 < uVar5 || (long)uVar8 < (long)param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c38c);
      (*pcVar3)();
    }
    if ((long)param_2 < (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c390);
      (*pcVar3)();
    }
    _swift_bridgeObjectRetain(lVar2);
    if (param_2 != uVar8) {
      lVar9 = param_2 << 6;
      do {
        lVar1 = lVar2 + lVar9;
        uVar4 = *(ulong *)(lVar1 + 0x30);
        if ((uVar4 >> 0x3d & 3) != 0) {
          if (((uint)(uVar4 >> 0x3d) & 3) != 2) {
            _swift_bridgeObjectRelease(lVar2);
            if (*(long *)(lVar2 + 0x10) < (long)uVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c394);
              (*pcVar3)();
            }
            if (*(long *)(lVar2 + 0x10) <= (long)param_2) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c398);
              (*pcVar3)();
            }
            lVar1 = lVar2 + lVar9;
            if ((*(ulong *)(lVar1 + 0x30) & 0x6000000000000000) != 0x2000000000000000) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c39c);
              (*pcVar3)();
            }
            uVar7 = *(undefined8 *)(lVar1 + 0x20);
            uVar6 = *(undefined8 *)(lVar1 + 0x28);
            lVar2 = lVar2 + lVar9;
            uVar5 = (ulong)*(byte *)(lVar2 + 0x58);
            uVar11 = *(undefined8 *)(lVar2 + 0x50);
            uVar10 = *(undefined8 *)(lVar2 + 0x48);
            FUN_10009583c(uVar7,uVar6,*(ulong *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x38),
                          *(undefined8 *)(lVar1 + 0x40));
            FUN_10009e42c();
            goto LAB_10009c2b0;
          }
          FUN_1000838ec(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),uVar4,
                        *(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
        }
        param_2 = param_2 + 1;
        lVar9 = lVar9 + 0x40;
      } while (uVar8 != param_2);
    }
    _swift_bridgeObjectRelease(lVar2);
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
LAB_10009c2b0:
  param_1[1] = uVar11;
  *param_1 = uVar10;
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  param_1[4] = uVar6;
  return;
}

