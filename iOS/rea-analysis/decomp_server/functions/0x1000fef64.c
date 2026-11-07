// rea decompile_all
// name: FUN_1000fef64
// address: 0x1000fef64
// body: available
// range: 0x1000fef64-0x1000ff237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000fef64(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_120 [16];
  undefined8 local_110;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *local_e0 [3];
  undefined *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  long lStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = param_1;
  if (DAT_100a73b60 != -1) {
    puVar1 = &DAT_100a73b60;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar3 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession);
    puVar1 = (undefined8 *)0x0;
    if (lVar3 != 0) {
      FUN_1000c8388();
      puVar1 = (undefined8 *)0x0;
      goto joined_r0x0001000ff034;
    }
  }
  lVar3 = 0;
joined_r0x0001000ff034:
  if (param_2 == 0) {
    if (lVar3 == 0) {
      uVar4 = 0;
      lStack_a0 = 0;
      local_98 = 0;
      local_70 = 0;
      uStack_68 = 0;
      puStack_f8 = (undefined *)0x0;
      local_100 = (undefined *)0x0;
      puStack_e8 = (undefined *)0x0;
      puStack_f0 = (undefined *)0x0;
    }
    else {
      FUN_1001bb9f8(&local_a8,lVar3);
      uVar4 = CONCAT71(uStack_a7,local_a8);
      puStack_f8 = (undefined *)CONCAT71(uStack_77,local_78);
      local_100 = local_80;
      puStack_e8 = puStack_88;
      puStack_f0 = local_90;
      puVar1 = (undefined8 *)0x0;
    }
    local_c8 = &DAT_1009dbde8;
    FUN_1001031c4();
    local_c0 = puVar1;
    FUN_100103204();
    puVar2 = &DAT_10099d058;
    local_b8 = puVar1;
    _swift_allocObject(&DAT_10099d058,0x58,7);
    if (lStack_a0 == 0) {
      uVar4 = 0;
      puVar2[0x20] = 0;
      puVar6 = (undefined *)0xe000000000000000;
      puVar5 = (undefined *)0x0;
      uStack_68 = 0xec00000064657463;
      local_70 = 0x656e6e6f63736964;
      lStack_a0 = -0x2000000000000000;
      puVar7 = puVar5;
      puVar8 = puVar6;
    }
    else {
      *(undefined8 *)(puVar2 + 0x20) = local_98;
      puVar5 = puStack_f0;
      puVar6 = puStack_e8;
      puVar7 = local_100;
      puVar8 = puStack_f8;
    }
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(long *)(puVar2 + 0x18) = lStack_a0;
    *(undefined **)(puVar2 + 0x30) = puVar6;
    *(undefined **)(puVar2 + 0x28) = puVar5;
    *(undefined **)(puVar2 + 0x40) = puVar8;
    *(undefined **)(puVar2 + 0x38) = puVar7;
    *(undefined8 *)(puVar2 + 0x48) = local_70;
    *(undefined8 *)(puVar2 + 0x50) = uStack_68;
    local_b0 = 1;
    local_e0[0] = puVar2;
    (*param_4)(local_e0);
    lVar3 = -0xd0;
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_110 = param_3;
    FUN_1003fb48c(FUN_1001031bc,auStack_120,0xd000000000000094,0x800000010088a280,0xd00000000000001e
                  ,0x800000010088a320,0xce,0);
    if (lVar3 == 0) {
      local_a8 = 0;
    }
    else {
      FUN_1001bbe24(param_1,param_2,param_3);
      local_a8 = (byte)param_1 & 1;
    }
    local_90 = PTR___sSbN_1009958c8;
    puStack_88 = PTR___sSbSesWP_1009958e0;
    local_80 = PTR___sSbSEsWP_1009958d0;
    local_78 = 1;
    (*param_4)(&local_a8);
    lVar3 = -0x98;
  }
  FUN_100102518(&stack0xfffffffffffffff0 + lVar3);
  return;
}

