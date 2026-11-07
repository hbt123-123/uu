// rea decompile_all
// name: FUN_1000e8d38
// address: 0x1000e8d38
// body: available
// range: 0x1000e8d38-0x1000e8f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e8d38(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long local_b8 [4];
  long local_98;
  long lStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  FUN_1000e984c();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffff40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar10 = (undefined8 *)(puVar9 + -extraout_x13);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar11 = (undefined8 *)((long)puVar10 - extraout_x13_00);
  if (param_3 != param_2) {
    local_88 = *param_4;
    local_b8[0] = *(long *)(extraout_x12 + 0x48);
    lVar6 = local_88 + local_b8[0] * (param_3 + -1);
    lVar8 = -local_b8[0];
    param_1 = param_1 - param_3;
    lVar7 = local_88 + local_b8[0] * param_3;
    local_b8[1] = param_2;
    local_b8[2] = lVar7;
    local_b8[3] = param_1;
    local_98 = lVar6;
    lStack_90 = param_3;
LAB_1000e8e6c:
    do {
      FUN_100082394(lVar7,puVar11,FUN_1000e984c);
      lVar4 = lVar6;
      FUN_100082394(lVar6,puVar10,FUN_1000e984c);
      local_70 = *puVar11;
      uStack_68 = puVar11[1];
      local_80 = *puVar10;
      uStack_78 = puVar10[1];
      FUN_10009ff0c();
      puVar5 = &local_80;
      __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                (puVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,lVar4,lVar4);
      FUN_1000d27dc(puVar10,FUN_1000e984c);
      FUN_1000d27dc(puVar11,FUN_1000e984c);
      if (puVar5 == (undefined8 *)0xffffffffffffffff) {
        if (local_88 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8f38);
          (*pcVar1)();
        }
        FUN_1000823d8(lVar7,puVar9,FUN_1000e984c);
        _swift_arrayInitWithTakeFrontToBack(lVar7,lVar6,1,lVar3);
        FUN_1000823d8(puVar9,lVar6,FUN_1000e984c);
        lVar6 = lVar6 + lVar8;
        lVar7 = lVar7 + lVar8;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_1000e8e6c;
      }
      lStack_90 = lStack_90 + 1;
      lVar6 = local_98 + local_b8[0];
      param_1 = local_b8[3] + -1;
      lVar7 = local_b8[2] + local_b8[0];
      local_b8[2] = lVar7;
      local_b8[3] = param_1;
      local_98 = lVar6;
    } while (lStack_90 != local_b8[1]);
  }
  return;
}

