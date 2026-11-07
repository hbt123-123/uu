// rea decompile_all
// name: FUN_10062fda8
// address: 0x10062fda8
// body: available
// range: 0x10062fda8-0x10062fe9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10062fda8(long param_1)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
  }
  else {
    puVar6 = (undefined1 *)(param_1 + 0x20);
    FUN_100630c78();
    puVar1 = PTR___ss5UInt8VN_100995d40;
    do {
      local_80 = (undefined1 *)CONCAT71(local_80._1_7_,*puVar6);
      uVar4 = 0x10;
      ppuVar2 = &local_80;
      __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(&local_80,0x10,0,puVar1,param_1);
      puVar3 = (undefined1 *)ppuVar2;
      __sSS5countSivg();
      if (puVar3 == (undefined1 *)0x1) {
        local_80 = (undefined1 *)0x30;
        uStack_78 = 0xe100000000000000;
        __sSS6appendyySSF(ppuVar2,uVar4);
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = uStack_78;
        ppuVar2 = (undefined1 **)local_80;
      }
      __sSS6appendyySSF(ppuVar2,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  auVar7._8_8_ = uStack_68;
  auVar7._0_8_ = local_70;
  return auVar7;
}

