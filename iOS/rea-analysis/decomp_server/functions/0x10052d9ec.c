// rea decompile_all
// name: FUN_10052d9ec
// address: 0x10052d9ec
// body: available
// range: 0x10052d9ec-0x10052dd2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010052dc98) */
/* WARNING: Removing unreachable block (ram,0x00010052daf8) */
/* WARNING: Removing unreachable block (ram,0x00010052dafc) */

void FUN_10052d9ec(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  long lVar6;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  code *local_88;
  code *local_80;
  undefined8 local_78;
  code *local_70;
  long local_68;
  
  lVar8 = *(long *)(param_5 + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_90 + -uVar4;
  lVar11 = (long)puVar7 - uVar4;
  FUN_10052d69c(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar4 = uVar5;
    local_68 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    local_70 = param_3;
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
    lVar6 = local_68;
    *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
    *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar1 = local_68;
    __sSa8endIndexSivg(local_68,param_5);
    if (lVar1 != 0) {
      __sSayxSicig(lVar11,0,lVar6,param_5);
      pcVar10 = *(code **)(lVar8 + 0x20);
      (*pcVar10)(puVar7,lVar11,param_5);
      (*local_70)();
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(puVar7,param_5);
      lVar8 = lVar6;
      __sSa8endIndexSivg(lVar6,param_5);
      if (lVar8 != 1) {
        lVar8 = 1;
        local_88 = pcVar9;
        local_80 = pcVar10;
        local_78 = param_4;
        do {
          __sSayxSicig(lVar11,lVar8,lVar6,param_5);
          lVar1 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10052dca8);
            (*pcVar9)();
          }
          (*local_80)(puVar7,lVar11,param_5);
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
          *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          (*local_70)();
          (*local_88)(puVar7,param_5);
          lVar6 = local_68;
          lVar2 = local_68;
          __sSa8endIndexSivg(local_68,param_5);
          lVar8 = lVar8 + 1;
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
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100506f84(uVar5,uVar4 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
    *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}

