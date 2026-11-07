// rea decompile_all
// name: FUN_10009f1c4
// address: 0x10009f1c4
// body: available
// range: 0x10009f1c4-0x10009f443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10009f1c4(long *param_1,code *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  code *pcVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [64];
  long local_d0;
  long lStack_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  long *local_88;
  long *local_80;
  long local_78;
  ulong uStack_70;
  
  pcVar4 = (code *)PTR___swiftEmptyArrayStorage_1000f0740;
  local_80 = param_1 + 4;
  uStack_70 = param_1[2] << 1 | 1;
  local_78 = 0;
  plVar6 = param_1;
  local_88 = param_1;
  _swift_bridgeObjectRetain();
  lVar9 = 0;
  do {
    FUN_10009c568();
    if (param_2 == (code *)0x0) {
LAB_10009f320:
      lVar10 = (uStack_70 >> 1) - local_78;
      if (lVar10 != 0) {
        if (lVar10 == 0 || (long)(uStack_70 >> 1) < local_78) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10009f440);
          (*pcVar4)();
        }
        plVar6 = local_80 + local_78 * 2 + 1;
        do {
          lVar1 = plVar6[-1];
          lVar3 = *plVar6;
          _swift_bridgeObjectRetain(lVar3);
          pcVar7 = pcVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          pcVar8 = pcVar4;
          if (((ulong)pcVar7 & 1) == 0) {
            pcVar8 = (code *)0x0;
            FUN_10006f808(0,*(long *)(pcVar4 + 0x10) + 1,1,pcVar4);
          }
          uVar2 = *(ulong *)(pcVar8 + 0x10);
          pcVar4 = pcVar8;
          if (*(ulong *)(pcVar8 + 0x18) >> 1 <= uVar2) {
            pcVar4 = (code *)(ulong)(1 < *(ulong *)(pcVar8 + 0x18));
            FUN_10006f808(pcVar4,uVar2 + 1,1,pcVar8);
          }
          local_d0 = CONCAT71(local_d0._1_7_,1);
          *(ulong *)(pcVar4 + 0x10) = uVar2 + 1;
          *(long *)(pcVar4 + uVar2 * 0x40 + 0x20) = lVar1;
          *(long *)(pcVar4 + uVar2 * 0x40 + 0x28) = lVar3;
          *(undefined8 *)(pcVar4 + uVar2 * 0x40 + 0x30) = 0x2000000000000000;
          *(undefined8 *)(pcVar4 + uVar2 * 0x40 + 0x38) = 0;
          *(undefined8 *)(pcVar4 + uVar2 * 0x40 + 0x40) = 0;
          *(long *)(pcVar4 + uVar2 * 0x40 + 0x48) = lVar9;
          *(undefined8 *)(pcVar4 + uVar2 * 0x40 + 0x50) = 0;
          pcVar4[uVar2 * 0x40 + 0x58] = (code)0x1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10009f43c);
            (*pcVar4)();
          }
          lVar9 = lVar9 + 1;
          plVar6 = plVar6 + 2;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      _swift_unknownObjectRelease(local_88);
      return pcVar4;
    }
    pcVar7 = param_2;
    FUN_10009cfd0();
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(param_1);
      _swift_bridgeObjectRelease(param_2);
      _swift_unknownObjectRelease(local_88);
      _swift_bridgeObjectRelease(pcVar4);
      return param_2;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRetain(plVar6);
    FUN_10006d904();
    if (plVar6[2] == 0) {
      _swift_bridgeObjectRelease();
    }
    else {
      lStack_c8 = plVar6[5];
      local_d0 = plVar6[4];
      local_b8 = plVar6[7];
      local_c0 = plVar6[6];
      uStack_a8 = (undefined1)plVar6[9];
      uStack_a7 = (undefined7)((ulong)plVar6[9] >> 8);
      local_b0 = plVar6[8];
      uStack_9f = *(undefined8 *)((long)plVar6 + 0x51);
      uStack_a7 = (undefined7)*(undefined8 *)((long)plVar6 + 0x49);
      uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)plVar6 + 0x49) >> 0x38);
      FUN_10008efe8(&local_d0,auStack_110);
      _swift_bridgeObjectRelease(plVar6);
      if ((((local_c0 & 0x6000000000000000) == 0x4000000000000000) &&
          (local_c0 == 0x4000000000000000)) &&
         ((local_b8 == 0 && local_b0 == 0) && (lStack_c8 == 0 && local_d0 == 0))) {
        bVar5 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10009f444);
          (*pcVar4)();
        }
        goto LAB_10009f320;
      }
      plVar6 = &local_d0;
      pcVar7 = FUN_1000838ec;
      FUN_10009f8f4();
    }
    bVar5 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    param_2 = pcVar7;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10009f438);
      (*pcVar4)();
    }
  } while( true );
}

