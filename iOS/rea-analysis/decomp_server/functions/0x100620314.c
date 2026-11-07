// rea decompile_all
// name: FUN_100620314
// address: 0x100620314
// body: available
// range: 0x100620314-0x1006205f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100620314(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  long local_a8;
  long local_a0;
  long local_88 [5];
  
  local_100 = *(long *)(param_5 + -8);
  lVar6 = *(long *)(local_100 + 0x40);
  lVar3 = 0;
  local_f8 = param_5;
  local_f0 = param_8;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = auStack_110 + -(lVar6 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_3,PTR___sSTTL_100995860,
             PTR___s7ElementSTTl_1009956f8);
  lVar10 = *(long *)(lVar3 + -8);
  lVar8 = (long)(auStack_110 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar8 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_c8 = lVar3;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8);
  local_e8 = *(long *)(lVar6 + -8);
  lVar9 = lVar7 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_3;
  lStack_e0 = lVar6;
  __sSl5countSivgTj(param_3,param_6);
  if (lVar3 == 0) {
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ();
  }
  else {
    lVar6 = param_4;
    local_a8 = lVar3;
    __ss15ContiguousArrayVAByxGycfC();
    uVar4 = 0;
    __ss15ContiguousArrayVMa(0,param_4);
    local_d8 = uVar4;
    __ss15ContiguousArrayV15reserveCapacityyySiF(local_a8);
    local_a0 = lVar9;
    __sSl10startIndex0B0QzvgTj(lVar9,param_3,param_6);
    lVar3 = local_a0;
    if (local_a8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006205f4);
      (*pcVar2)();
    }
    lVar9 = 0;
    local_108 = param_4;
    local_d0 = lVar7;
    do {
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006205f0);
        (*pcVar2)();
      }
      pcVar2 = (code *)local_88;
      local_a0 = lVar9 + 1;
      __sSly7ElementQz5IndexQzcirTj(pcVar2,lVar3,param_3,param_6);
      lVar1 = local_c8;
      (**(code **)(lVar10 + 0x10))(lVar8);
      (*pcVar2)(local_88,0);
      (*local_c0)(lVar7,lVar8,local_b0);
      if (unaff_x21 != 0) {
        (**(code **)(lVar10 + 8))(lVar8,lVar1);
        (**(code **)(local_e8 + 8))(lVar3,lStack_e0);
        _swift_release(lVar6);
        (**(code **)(local_100 + 0x20))(local_f0,local_b0,local_f8);
        return;
      }
      (**(code **)(lVar10 + 8))(lVar8,lVar1);
      __ss15ContiguousArrayV6appendyyxnF(lVar7,local_d8);
      __sSl9formIndex5aftery0B0Qzz_tFTj(lVar3,param_3,param_6);
      lVar9 = lVar9 + 1;
    } while (local_a0 != local_a8);
    (**(code **)(local_e8 + 8))(lVar3,lStack_e0);
    uVar4 = local_d8;
    puVar5 = PTR___ss15ContiguousArrayVyxGSTsMc_100995b50;
    local_88[0] = lVar6;
    _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSTsMc_100995b50,local_d8);
    __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC(local_88,local_108,uVar4,puVar5);
  }
  return;
}

