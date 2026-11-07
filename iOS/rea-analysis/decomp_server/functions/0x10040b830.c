// rea decompile_all
// name: FUN_10040b830
// address: 0x10040b830
// body: available
// range: 0x10040b830-0x10040ba17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10040b830(long *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  lVar5 = 0;
  FUN_1003c5f68();
  local_68 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_68 + 0x40));
  lVar5 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar8 = (ulong *)(param_4 + 0x40);
  local_80 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((long)-local_80 < 0x40) {
    uVar11 = ~(-1L << (-local_80 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  if (param_2 == 0) {
    lVar9 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10040ba18);
      (*pcVar3)();
    }
    lVar9 = 0;
    uVar10 = 0x3f - local_80 >> 6;
    local_70 = param_3;
    local_78 = param_1;
    lVar7 = lVar9;
    lVar2 = 1;
    param_3 = 0;
    while( true ) {
      while (lVar6 = lVar2, uVar11 != 0) {
        uVar1 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 - 1 & uVar11;
        lVar7 = *(long *)(local_68 + 0x48);
        FUN_1003afc3c(*(long *)(param_4 + 0x38) +
                      lVar7 * (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) | lVar9 << 6),lVar5);
        FUN_1003afbf8(lVar5,lVar5 - extraout_x12);
        FUN_1003afbf8(lVar5 - extraout_x12,param_2);
        param_1 = local_78;
        param_3 = local_70;
        if (lVar6 == local_70) goto LAB_10040b9d0;
        param_2 = param_2 + lVar7;
        lVar7 = lVar9;
        lVar2 = lVar6 + 1;
        param_3 = lVar6;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b99c);
          (*pcVar3)();
        }
      }
      bVar4 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10040ba14);
        (*pcVar3)();
      }
      if ((long)uVar10 <= lVar9) break;
      uVar11 = puVar8[lVar9];
      lVar2 = lVar6;
    }
    uVar11 = 0;
    if ((long)uVar10 <= lVar7 + 1) {
      uVar10 = lVar7 + 1;
    }
    lVar9 = uVar10 - 1;
    param_1 = local_78;
  }
LAB_10040b9d0:
  *param_1 = param_4;
  param_1[1] = (long)puVar8;
  param_1[2] = ~local_80;
  param_1[3] = lVar9;
  param_1[4] = uVar11;
  return param_3;
}

