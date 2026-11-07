// rea decompile_all
// name: FUN_100404dd4
// address: 0x100404dd4
// body: available
// range: 0x100404dd4-0x100404f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100404dd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_70 [16];
  long *local_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  ulong uStack_40;
  
  local_58 = 0x2f;
  lStack_50 = 0xe100000000000000;
  local_60 = &local_58;
  _swift_bridgeObjectRetain(param_2);
  lVar1 = 0x7fffffffffffffff;
  FUN_10000b9ac(0x7fffffffffffffff,0,FUN_10000d558,auStack_70,param_1,param_2);
  uVar7 = *(ulong *)(lVar1 + 0x10);
  if (3 < uVar7) {
    uVar5 = *(ulong *)(lVar1 + 0x40);
    FUN_1000aa024(uVar5,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),
                  *(undefined8 *)(lVar1 + 0x58),0x7372657355,0xe500000000000000);
    if ((uVar5 & 1) != 0) {
      lStack_50 = lVar1 + 0x20;
      uStack_40 = uVar7 << 1 | 1;
      local_48 = 3;
      puVar2 = &DAT_100a8e1c0;
      local_58 = lVar1;
      FUN_100004bb4(&DAT_100a8e1c0,&DAT_100824b18);
      puVar3 = &DAT_100a8e1c8;
      FUN_10003f840(&DAT_100a8e1c8,&DAT_100a8e1c0,&DAT_100824b18,
                    PTR___ss10ArraySliceVyxGSTsMc_100995ab8);
      puVar4 = puVar3;
      FUN_10040617c();
      uVar5 = 0x2f;
      uVar6 = 0xe100000000000000;
      __sSTsSy7ElementRpzrlE6joined9separatorS2S_tF(0x2f,0xe100000000000000,puVar2,puVar3,puVar4);
      _swift_bridgeObjectRelease(lVar1);
      uVar7 = uVar5 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar7 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar7 == 0) {
        _swift_bridgeObjectRelease(uVar6);
        lStack_50 = 0xe100000000000000;
        local_58 = 0x7e;
      }
      else {
        local_58 = 0x2f7e;
        lStack_50 = 0xe200000000000000;
        __sSS6appendyySSF(uVar5,uVar6);
        _swift_bridgeObjectRelease(uVar6);
      }
      goto LAB_100404f44;
    }
  }
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRetain(param_2);
  lStack_50 = param_2;
  local_58 = param_1;
LAB_100404f44:
  auVar8._8_8_ = lStack_50;
  auVar8._0_8_ = local_58;
  return auVar8;
}

