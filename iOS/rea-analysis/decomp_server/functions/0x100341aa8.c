// rea decompile_all
// name: FUN_100341aa8
// address: 0x100341aa8
// body: available
// range: 0x100341aa8-0x100341d7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100341aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_c0;
  code *local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = 0;
  local_78 = param_2;
  local_70 = param_3;
  FUN_1003423b0();
  local_90 = *(long *)(lVar5 + -8);
  local_88 = *(long *)(local_90 + 0x40);
  lVar12 = (long)&local_c0 - (local_88 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_80 = lVar12;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar6 + -8);
  lVar12 = lVar12 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100a84680;
  FUN_100004bb4(&DAT_100a84680,&DAT_100818f90);
  uVar8 = *(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar12 - uVar8;
  lVar13 = lVar15 - uVar8;
  FUN_100342d40(param_1,lVar13);
  lVar5 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar13,puVar7);
  if ((int)lVar5 != 1) {
    local_98 = param_6;
    (**(code **)(lVar14 + 0x20))(lVar12,lVar13,lVar6);
    lVar5 = *(long *)(param_4 + 0x10);
    if (lVar5 == 0) {
      (**(code **)(lVar14 + 0x10))(lVar15,lVar12,lVar6);
      _swift_storeEnumTagMultiPayload(lVar15,puVar7,0);
      (*param_5)(lVar15);
      FUN_100315050(lVar15);
    }
    else {
      lVar13 = param_4;
      local_b0 = lVar6;
      lStack_a8 = lVar14;
      _swift_bridgeObjectRetain();
      _swift_isUniquelyReferenced_nonNull_native();
      local_b8 = param_5;
      if (((int)lVar13 == 0) ||
         (local_a0 = param_4, local_68 = param_4, *(ulong *)(param_4 + 0x18) >> 1 < lVar5 - 1U)) {
        local_68 = param_4;
        FUN_100296580();
        local_68 = lVar13;
      }
      local_a0 = local_68;
      FUN_100342528(0,1,0,&DAT_100a83320,&DAT_100817828);
      uVar1 = *(undefined8 *)(param_4 + 0x38);
      lVar5 = *(long *)(param_4 + 0x40);
      param_4 = param_4 + 0x20;
      FUN_10003f030(param_4,uVar1);
      uVar4 = local_70;
      lVar6 = local_80;
      local_c0 = param_4;
      FUN_10034260c(local_70,local_80);
      uVar8 = (ulong)*(byte *)(local_90 + 0x50);
      uVar9 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
      uVar11 = local_88 + uVar9 + 7 & 0xfffffffffffffff8;
      puVar7 = &DAT_1009b3750;
      _swift_allocObject(&DAT_1009b3750,uVar11 + 0x18,uVar8 | 7);
      uVar3 = local_78;
      *(undefined8 *)(puVar7 + 0x10) = local_78;
      FUN_100342650(lVar6,puVar7 + uVar9);
      uVar2 = local_98;
      *(long *)(puVar7 + uVar11) = local_a0;
      *(code **)(puVar7 + uVar11 + 8) = local_b8;
      *(undefined8 *)((long)(puVar7 + uVar11 + 8) + 8) = local_98;
      pcVar10 = *(code **)(lVar5 + 0x10);
      _swift_retain(uVar3);
      _swift_retain(uVar2);
      (*pcVar10)(lVar12,uVar4,thunk_FUN_100342e44,puVar7,uVar1,lVar5);
      _swift_release(puVar7);
      lVar6 = local_b0;
      lVar14 = lStack_a8;
    }
    (**(code **)(lVar14 + 8))(lVar12,lVar6);
    return;
  }
  FUN_100315050(lVar13);
  (*param_5)(param_1);
  return;
}

