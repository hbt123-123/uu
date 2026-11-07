// rea decompile_all
// name: FUN_100216f7c
// address: 0x100216f7c
// body: available
// range: 0x100216f7c-0x100217223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100216f7c(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_6c;
  undefined *local_68;
  
  if (param_2 == 0) {
    uVar5 = 0;
    uVar9 = 0xffffffffffffffff;
    uVar7 = 0xe000000000000000;
  }
  else {
    uVar9 = *(ulong *)(param_2 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar9 != 0) {
      uVar1 = uVar9;
      if (2 < uVar9) {
        uVar1 = 3;
      }
      local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_6c = param_4;
      _swift_bridgeObjectRetain(param_2);
      FUN_10006fae0(0,uVar1,0);
      puVar8 = local_68;
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      uVar1 = *(ulong *)(local_68 + 0x10);
      uVar2 = *(ulong *)(local_68 + 0x18);
      _swift_bridgeObjectRetain(uVar7);
      if (uVar2 >> 1 <= uVar1) {
        FUN_10006fae0(1 < uVar2,uVar1 + 1,1);
        puVar8 = local_68;
      }
      *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar5;
      *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = uVar7;
      if (uVar9 != 1) {
        uVar5 = *(undefined8 *)(param_2 + 0x50);
        uVar7 = *(undefined8 *)(param_2 + 0x58);
        uVar1 = *(ulong *)(puVar8 + 0x10);
        uVar2 = *(ulong *)(puVar8 + 0x18);
        local_68 = puVar8;
        _swift_bridgeObjectRetain();
        if (uVar2 >> 1 <= uVar1) {
          FUN_10006fae0(1 < uVar2,uVar1 + 1,1);
          puVar8 = local_68;
        }
        *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = uVar7;
        if (uVar9 != 2) {
          uVar5 = *(undefined8 *)(param_2 + 0x80);
          uVar7 = *(undefined8 *)(param_2 + 0x88);
          uVar1 = *(ulong *)(puVar8 + 0x10);
          uVar2 = *(ulong *)(puVar8 + 0x18);
          local_68 = puVar8;
          _swift_bridgeObjectRetain();
          if (uVar2 >> 1 <= uVar1) {
            FUN_10006fae0(1 < uVar2,uVar1 + 1,1);
            puVar8 = local_68;
          }
          *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar5;
          *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = uVar7;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      param_4 = local_6c;
    }
    puVar3 = &DAT_100a756e8;
    local_68 = puVar8;
    FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
    puVar4 = &DAT_100a756f0;
    FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
    uVar5 = 0x2c;
    uVar7 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar3,puVar4);
    _swift_bridgeObjectRelease(puVar8);
  }
  uVar6 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar6);
  local_78 = (undefined1)param_4;
  local_a0 = param_1;
  uStack_98 = param_3;
  local_90 = uVar9;
  uStack_88 = uVar5;
  local_80 = uVar7;
  FUN_1003fb48c(thunk_FUN_100217a40,auStack_b0,0xd0000000000000b2,0x8000000100885c70,
                0xd000000000000041,0x80000001008a4410,0x100,0);
  _swift_bridgeObjectRelease(uVar7);
  return;
}

