// rea decompile_all
// name: FUN_100094798
// address: 0x100094798
// body: available
// range: 0x100094798-0x10009494b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100094798(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *local_70;
  undefined *local_68;
  
  puVar2 = &DAT_100a75af8;
  FUN_100004bb4(&DAT_100a75af8,&DAT_10080ac30);
  lVar6 = *(long *)(puVar2 + -8);
  local_70 = puVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&local_70 - extraout_x8;
  puVar2 = &DAT_100a75b08;
  FUN_100004bb4(&DAT_100a75b08,&DAT_10080c340);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar5 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fdc0(0,lVar5,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    lVar6 = *(long *)(lVar6 + 0x48);
    puVar3 = local_68;
    do {
      FUN_10007f314(param_1,lVar4,&DAT_100a75af8,&DAT_10080ac30);
      _swift_dynamicCast(lVar4 - extraout_x8_00,lVar4,local_70,puVar2,7);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      local_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_10006fdc0(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      puVar3 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      FUN_1000a00a8(lVar4 - extraout_x8_00,
                    local_68 +
                    *(long *)(lVar7 + 0x48) * uVar1 +
                    ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)),&DAT_100a75b08,
                    &DAT_10080c340);
      param_1 = param_1 + lVar6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puVar3;
}

