// rea decompile_all
// name: FUN_100085ba8
// address: 0x100085ba8
// body: available
// range: 0x100085ba8-0x100085d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100085ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined *local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (param_1 != 0) {
    uVar2 = 0;
    local_70 = param_1;
    __sSaMa();
    puVar3 = PTR___sSayxGSlsMc_1000f0390;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_1000f0390,uVar2);
    uVar4 = uVar2;
    __sSlsE7isEmptySbvg(uVar2,puVar3);
    if ((uVar4 & 1) == 0) {
      puVar6 = PTR___sSayxGSTsMc_1000f0380;
      local_a0 = param_1;
      _swift_getWitnessTable(PTR___sSayxGSTsMc_1000f0380,uVar2);
      __sSTsE4lazys12LazySequenceVyxGvg(&local_78,uVar2,puVar6);
      local_80 = local_78;
      puVar3 = &DAT_1000f9710;
      _swift_allocObject(&DAT_1000f9710,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = param_2;
      *(undefined8 *)(puVar3 + 0x18) = param_3;
      uVar7 = 0;
      __ss12LazySequenceVMa(0,uVar2,puVar6);
      puVar8 = PTR___ss12LazySequenceVyxGs0aB8ProtocolsMc_1000f04b0;
      _swift_getWitnessTable(PTR___ss12LazySequenceVyxGs0aB8ProtocolsMc_1000f04b0,uVar7);
      puVar9 = PTR___sSSN_1000f02f8;
      __ss20LazySequenceProtocolPsE3mapys0a3MapB0Vy8ElementsQzqd__Gqd__7ElementQzclF
                (&local_70,FUN_10008675c,puVar3,uVar7,PTR___sSSN_1000f02f8,puVar8);
      _swift_bridgeObjectRelease(local_78);
      _swift_release(puVar3);
      lVar1 = local_70;
      uStack_98 = uStack_68;
      local_a0 = local_70;
      local_90 = local_60;
      uVar7 = 0;
      __ss15LazyMapSequenceVMa(0,uVar2,puVar9,puVar6);
      puVar3 = PTR___sSayxGSKsMc_1000f0378;
      _swift_getWitnessTable(PTR___sSayxGSKsMc_1000f0378,uVar2);
      puVar9 = PTR___ss15LazyMapSequenceVyxq_GSKsSKRzrlMc_1000f04f0;
      local_a8 = puVar3;
      _swift_getWitnessTable(PTR___ss15LazyMapSequenceVyxq_GSKsSKRzrlMc_1000f04f0,uVar7,&local_a8);
      uVar5 = 0x202c;
      uVar10 = 0xe200000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,uVar7,puVar9);
      _swift_release(local_60);
      _swift_bridgeObjectRelease(lVar1);
    }
    else {
      uVar5 = 0;
      uVar10 = 0;
    }
    auVar11._8_8_ = uVar10;
    auVar11._0_8_ = uVar5;
    return auVar11;
  }
  return ZEXT816(0);
}

