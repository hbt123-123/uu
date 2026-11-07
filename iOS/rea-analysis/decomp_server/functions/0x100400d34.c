// rea decompile_all
// name: FUN_100400d34
// address: 0x100400d34
// body: available
// range: 0x100400d34-0x100400f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100400d34(long param_1,long param_2,long param_3,long *param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long unaff_x21;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  local_68 = param_5;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  local_78 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar8 = lVar7 - extraout_x12_00;
  if (param_3 != param_2) {
    local_80 = *param_4;
    local_b8 = *(long *)(extraout_x13 + 0x48);
    local_70 = *(code **)(extraout_x13 + 0x10);
    lVar5 = local_80 + local_b8 * (param_3 + -1);
    local_88 = -local_b8;
    param_1 = param_1 - param_3;
    lVar9 = local_80 + local_b8 * param_3;
    local_b0 = param_2;
    local_a8 = lVar9;
    lStack_a0 = param_1;
    local_98 = lVar5;
    lStack_90 = param_3;
LAB_100400e28:
    do {
      pcVar6 = local_70;
      (*local_70)(uVar8,lVar9,lVar3);
      (*pcVar6)(lVar7,lVar5,lVar3);
      uVar4 = uVar8;
      FUN_1003ff094(uVar8,lVar7,local_68);
      if (unaff_x21 != 0) {
        pcVar6 = *(code **)(extraout_x13 + 8);
        (*pcVar6)(lVar7,lVar3);
        (*pcVar6)(uVar8,lVar3);
        return;
      }
      pcVar6 = *(code **)(extraout_x13 + 8);
      (*pcVar6)(lVar7,lVar3);
      (*pcVar6)(uVar8,lVar3);
      puVar1 = local_78;
      if ((uVar4 & 1) != 0) {
        if (local_80 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100400f5c);
          (*pcVar6)();
        }
        pcVar6 = *(code **)(extraout_x13 + 0x20);
        (*pcVar6)(local_78,lVar9,lVar3);
        _swift_arrayInitWithTakeFrontToBack(lVar9,lVar5,1,lVar3);
        (*pcVar6)(lVar5,puVar1,lVar3);
        lVar5 = lVar5 + local_88;
        lVar9 = lVar9 + local_88;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_100400e28;
      }
      lStack_90 = lStack_90 + 1;
      lVar5 = local_98 + local_b8;
      param_1 = lStack_a0 + -1;
      lVar9 = local_a8 + local_b8;
      local_a8 = lVar9;
      lStack_a0 = param_1;
      local_98 = lVar5;
    } while (lStack_90 != local_b0);
  }
  return;
}

