// rea decompile_all
// name: FUN_1003cf6ec
// address: 0x1003cf6ec
// body: available
// range: 0x1003cf6ec-0x1003cf90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003cf6ec(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong local_98 [4];
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar3 = 0;
  FUN_1003c5f68();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar9 = (ulong *)(puVar8 + -extraout_x13);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar10 = (ulong *)((long)puVar9 - extraout_x13_00);
  if (param_3 != param_2) {
    local_68 = *param_4;
    local_98[0] = *(long *)(extraout_x12 + 0x48);
    lVar5 = local_68 + local_98[0] * (param_3 + -1);
    lVar6 = -local_98[0];
    param_1 = param_1 - param_3;
    lVar11 = local_68 + local_98[0] * param_3;
    local_98[1] = param_2;
    local_98[2] = lVar11;
    local_98[3] = param_1;
    local_78 = lVar5;
    lStack_70 = param_3;
LAB_1003cf838:
    do {
      FUN_100082394(lVar11,puVar10,FUN_1003c5f68);
      FUN_100082394(lVar5,puVar9,FUN_1003c5f68);
      lVar7 = (long)*(int *)(lVar3 + 0x14);
      uVar4 = (long)puVar10 + lVar7;
      __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar4,(long)puVar9 + lVar7);
      if ((uVar4 & 1) == 0) {
        uVar4 = (long)puVar10 + lVar7;
        __s10Foundation4DateV1goiySbAC_ACtFZ(uVar4,(long)puVar9 + lVar7);
LAB_1003cf89c:
        FUN_1000d27dc(puVar9,FUN_1003c5f68);
        FUN_1000d27dc(puVar10,FUN_1003c5f68);
        if ((uVar4 & 1) != 0) {
          if (local_68 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf910);
            (*pcVar1)();
          }
          FUN_1000823d8(lVar11,puVar8,FUN_1003c5f68);
          _swift_arrayInitWithTakeFrontToBack(lVar11,lVar5,1,lVar3);
          FUN_1000823d8(puVar8,lVar5,FUN_1003c5f68);
          lVar5 = lVar5 + lVar6;
          lVar11 = lVar11 + lVar6;
          bVar2 = param_1 != -1;
          param_1 = param_1 + 1;
          if (bVar2) goto LAB_1003cf838;
        }
      }
      else {
        uVar4 = *puVar10;
        if (uVar4 != *puVar9 || puVar10[1] != puVar9[1]) {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          goto LAB_1003cf89c;
        }
        FUN_1000d27dc(puVar9,FUN_1003c5f68);
        FUN_1000d27dc(puVar10,FUN_1003c5f68);
      }
      lStack_70 = lStack_70 + 1;
      lVar5 = local_78 + local_98[0];
      param_1 = local_98[3] + -1;
      lVar11 = local_98[2] + local_98[0];
      local_98[2] = lVar11;
      local_98[3] = param_1;
      local_78 = lVar5;
    } while (lStack_70 != local_98[1]);
  }
  return;
}

