// rea decompile_all
// name: FUN_1000a452c
// address: 0x1000a452c
// body: available
// range: 0x1000a452c-0x1000a477f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000a452c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auStack_150 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  int local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 6;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  puVar4 = (undefined8 *)(puVar1 + 0x20);
  *puVar4 = 0x632d686361746564;
  *(undefined8 *)(puVar1 + 0x28) = 0xed0000746e65696c;
  *(undefined8 *)(puVar1 + 0x30) = 0x742d;
  *(undefined8 *)(puVar1 + 0x38) = 0xe200000000000000;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_2;
  _swift_bridgeObjectRetain(param_2);
  FUN_1000a3308(local_b0,puVar1);
  _swift_setDeallocating(puVar1);
  _swift_arrayDestroy(puVar4,*(undefined8 *)(puVar1 + 0x10),PTR___sSSN_1009957f8);
  if (local_b0[0] == 0) {
    uStack_68 = uStack_a0;
    local_70 = local_a8;
    FUN_1000a9ec8(&local_70);
    uStack_78 = uStack_90;
    local_80 = local_98;
    FUN_1000a9ec8(&local_80);
    uVar3 = 1;
  }
  else {
    uStack_78 = uStack_90;
    local_80 = local_98;
    uStack_68 = uStack_90;
    local_70 = local_98;
    local_110 = 0x6e65696c63206f6e;
    uStack_108 = 0xe900000000000074;
    FUN_10009ff0c();
    puVar2 = &local_110;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (puVar2,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,puVar4,puVar4);
    if (((ulong)puVar2 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_140 = param_1;
      uStack_138 = param_2;
      FUN_1003fb4bc(FUN_1000aab14,auStack_150,0xd000000000000094,0x8000000100880950,
                    &DAT_d000000000000018,0x8000000100880e40,0x138,0);
    }
    uStack_108 = uStack_68;
    local_110 = local_70;
    local_120 = 0x6e65696c63206f6e;
    local_118 = 0xe900000000000074;
    _swift_bridgeObjectRetain(uStack_68);
    puVar2 = &local_120;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (puVar2,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,puVar4,puVar4);
    uVar3 = (uint)puVar2;
    uStack_78 = uStack_a0;
    local_80 = local_a8;
    FUN_1000a9ec8(&local_80);
    FUN_1000a9ec8(&local_70);
    FUN_1000a9ec8(&local_70);
  }
  return uVar3 & 1;
}

