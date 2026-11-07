// rea decompile_all
// name: FUN_100096aa4
// address: 0x100096aa4
// body: available
// range: 0x100096aa4-0x100096c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100096aa4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  lVar7 = *(long *)(param_3 + -8);
  lVar6 = (long)&local_b0 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x20))(lVar6,param_1);
  lVar3 = param_3;
  __ss9CodingKeyP11stringValueSSvgTj();
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_1000f0740;
    local_b0 = param_4;
    lStack_a8 = lVar3;
    local_98 = lVar7;
    FUN_1000798d0(0,lVar8,0);
    lVar3 = param_2 + 0x20;
    local_a0 = param_2;
    do {
      puVar2 = local_68;
      FUN_10005b984(lVar3,auStack_90);
      uVar5 = uStack_70;
      uVar4 = local_78;
      FUN_10000eba0(auStack_90,local_78);
      __ss9CodingKeyP11stringValueSSvgTj();
      FUN_100001428(auStack_90);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      local_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_1000798d0(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar5;
      lVar3 = lVar3 + 0x28;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(local_a0);
    lVar3 = lStack_a8;
    lVar7 = local_98;
  }
  (**(code **)(lVar7 + 8))(lVar6,param_3);
  return lVar3;
}

