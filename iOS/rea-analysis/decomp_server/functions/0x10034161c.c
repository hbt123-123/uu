// rea decompile_all
// name: FUN_10034161c
// address: 0x10034161c
// body: available
// range: 0x10034161c-0x100341867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034161c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = 0;
  local_78 = param_2;
  uStack_70 = param_3;
  __s10Foundation10URLRequestVMa();
  lVar8 = *(long *)(lVar3 + -8);
  lVar7 = (long)&local_80 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a84680;
  FUN_100004bb4(&DAT_100a84680,&DAT_100818f90);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar7 - uVar5;
  lVar9 = lVar10 - uVar5;
  FUN_100342d40(param_1,lVar9);
  lVar6 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,puVar4);
  if ((int)lVar6 == 1) {
    FUN_100315050(lVar9);
    (*param_5)(param_1);
  }
  else {
    local_80 = param_5;
    (**(code **)(lVar8 + 0x20))(lVar7,lVar9,lVar3);
    lVar6 = *(long *)(param_4 + 0x10);
    if (lVar6 == 0) {
      (**(code **)(lVar8 + 0x10))(lVar10,lVar7,lVar3);
      _swift_storeEnumTagMultiPayload(lVar10,puVar4,0);
      (*local_80)(lVar10);
      FUN_100315050(lVar10);
    }
    else {
      lVar9 = param_4;
      _swift_bridgeObjectRetain();
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar9 == 0) || (lVar10 = param_4, *(ulong *)(param_4 + 0x18) >> 1 < lVar6 - 1U)) {
        local_68 = param_4;
        FUN_100296580();
        lVar10 = lVar9;
      }
      local_68 = lVar10;
      FUN_100342528(0,1,0,&DAT_100a83320,&DAT_100817828);
      uVar1 = *(undefined8 *)(param_4 + 0x38);
      lVar6 = *(long *)(param_4 + 0x40);
      FUN_10003f030(param_4 + 0x20,uVar1);
      puVar4 = &DAT_1009b3778;
      _swift_allocObject(&DAT_1009b3778,0x38,7);
      uVar2 = uStack_70;
      *(undefined8 *)(puVar4 + 0x10) = local_78;
      *(undefined8 *)(puVar4 + 0x18) = uStack_70;
      *(long *)(puVar4 + 0x20) = lVar10;
      *(code **)(puVar4 + 0x28) = local_80;
      *(undefined8 *)(puVar4 + 0x30) = param_6;
      pcVar11 = *(code **)(lVar6 + 8);
      _swift_retain();
      _swift_retain(uVar2);
      _swift_retain(param_6);
      (*pcVar11)(lVar7,uVar2,thunk_FUN_100342ee4,puVar4,uVar1,lVar6);
      _swift_release(puVar4);
    }
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
  }
  return;
}

