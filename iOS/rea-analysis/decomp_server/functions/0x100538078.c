// rea decompile_all
// name: FUN_100538078
// address: 0x100538078
// body: available
// range: 0x100538078-0x10053826b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100538210) */

void FUN_100538078(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,long param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long unaff_x21;
  ulong *puVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  uVar3 = 0;
  uVar7 = 0;
  lVar6 = param_6;
  FUN_100548664();
  pcVar9 = *(code **)(param_7 + 0x48);
  uVar4 = 0;
  local_78 = uVar3;
  local_70 = uVar7;
  local_68 = lVar6;
  FUN_100548658(0,param_6,param_7);
  (*pcVar9)(&local_78,uVar4,&PTR_PTR_1009d1400,param_6,param_7);
  lVar6 = local_68;
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(local_70);
    lVar10 = *(long *)(param_2 + 0x10);
    if (lVar10 != 0) {
      puVar11 = (ulong *)(param_2 + 0x28);
      do {
        uVar1 = puVar11[-1];
        uVar2 = *puVar11;
        if (*(long *)(lVar6 + 0x10) == 0) {
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          _swift_bridgeObjectRetain(uVar2);
        }
        else {
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(lVar6);
          uVar5 = uVar1;
          uVar8 = uVar2;
          FUN_1001a2c70(uVar1);
          if ((uVar8 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar6);
            uStack_98 = 0;
            local_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            FUN_10003e8bc(*(long *)(lVar6 + 0x38) + uVar5 * 0x20,&local_a0);
            _swift_bridgeObjectRelease(lVar6);
          }
        }
        FUN_100546374(uVar1,uVar2,&local_a0,param_5 & 1,param_6,param_7);
        FUN_100040bb4(&local_a0,&DAT_100aaa408,&DAT_1008360c8);
        _swift_bridgeObjectRelease(uVar2);
        puVar11 = puVar11 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  else {
    _swift_bridgeObjectRelease(local_70);
    lVar6 = local_68;
  }
  _swift_bridgeObjectRelease(lVar6);
  return;
}

