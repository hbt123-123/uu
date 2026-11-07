// rea decompile_all
// name: FUN_10055aaa8
// address: 0x10055aaa8
// body: available
// range: 0x10055aaa8-0x10055ad67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055aaa8(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  
  lVar6 = *(long *)(param_5 + -8);
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar9 = auStack_80 + -uVar4;
  lVar10 = (long)puVar9 - uVar4;
  FUN_100557cc0(param_2);
  FUN_1004f9e80(": ",2);
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100506f84(uVar5,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar5;
  lVar1 = param_1;
  __sSa8endIndexSivg(param_1,param_5);
  if (lVar1 != 0) {
    __sSayxSicig(lVar10,0,param_1,param_5);
    pcVar8 = *(code **)(lVar6 + 0x20);
    (*pcVar8)(puVar9,lVar10,param_5);
    (*param_3)(puVar9,unaff_x20);
    pcVar7 = *(code **)(lVar6 + 8);
    (*pcVar7)(puVar9,param_5);
    lVar6 = param_1;
    __sSa8endIndexSivg(param_1,param_5);
    if (lVar6 != 1) {
      lVar6 = 1;
      do {
        __sSayxSicig(lVar10,lVar6,param_1,param_5);
        lVar1 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10055acc8);
          (*pcVar7)();
        }
        (*pcVar8)(puVar9,lVar10,param_5);
        FUN_1004f9e80(", ",2);
        (*param_3)(puVar9,unaff_x20);
        (*pcVar7)(puVar9,param_5);
        lVar2 = param_1;
        __sSa8endIndexSivg(param_1,param_5);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar2);
    }
  }
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar6 = uVar4 + 1;
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100506f84(uVar5,lVar6,1,uVar3);
  }
  *(long *)(uVar5 + 0x10) = lVar6;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar5;
  lVar10 = uVar4 + 2;
  uVar4 = uVar5;
  if ((long)(*(ulong *)(uVar5 + 0x18) >> 1) < lVar10) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_100506f84(uVar4,lVar10,1,uVar5);
  }
  *(long *)(uVar4 + 0x10) = lVar10;
  *(undefined1 *)(uVar4 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}

