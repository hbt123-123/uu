// rea decompile_all
// name: FUN_100341868
// address: 0x100341868
// body: available
// range: 0x100341868-0x100341aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100341868(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  undefined1 *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  lVar3 = 0;
  local_98 = param_2;
  FUN_1003423b0();
  lVar10 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  puVar13 = auStack_c0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a84680;
  FUN_100004bb4(&DAT_100a84680,&DAT_100818f90);
  lVar14 = (long)puVar13 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar3 + 0x10) == 0) {
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(lVar14,param_1,lVar3);
    _swift_storeEnumTagMultiPayload(lVar14,puVar4,0);
    (*param_3)(lVar14);
    FUN_100315050(lVar14);
  }
  else {
    FUN_1000b142c(lVar3 + 0x20,auStack_90);
    lVar14 = *(long *)(lVar3 + 0x10);
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100341aa8);
      (*pcVar8)();
    }
    lVar5 = lVar3;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    local_b0 = param_1;
    local_a8 = param_3;
    uStack_a0 = param_4;
    if (((int)lVar5 == 0) || (*(ulong *)(lVar3 + 0x18) >> 1 < lVar14 - 1U)) {
      local_68 = lVar3;
      FUN_100296580();
      lVar3 = lVar5;
    }
    local_68 = lVar3;
    FUN_100342528(0,1,0,&DAT_100a83320,&DAT_100817828);
    puVar6 = auStack_90;
    FUN_10003f030(puVar6,local_78);
    uVar2 = local_98;
    local_b8 = puVar6;
    FUN_10034260c(local_98,puVar13);
    uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar11 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    uVar12 = lVar9 + uVar11 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_1009b3588;
    _swift_allocObject(&DAT_1009b3588,uVar12 + 0x18,uVar7 | 7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    FUN_100342650(puVar13,puVar4 + uVar11);
    uVar1 = uStack_a0;
    *(long *)(puVar4 + uVar12) = lVar3;
    *(code **)(puVar4 + uVar12 + 8) = local_a8;
    *(undefined8 *)((long)(puVar4 + uVar12 + 8) + 8) = uStack_a0;
    pcVar8 = *(code **)(lStack_70 + 0x10);
    _swift_retain();
    _swift_retain(uVar1);
    (*pcVar8)(local_b0,uVar2,thunk_FUN_100342e44,puVar4,local_78,lStack_70);
    _swift_release(puVar4);
    FUN_10003f094(auStack_90);
  }
  return;
}

