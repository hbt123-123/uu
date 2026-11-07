// rea decompile_all
// name: FUN_10051f544
// address: 0x10051f544
// body: available
// range: 0x10051f544-0x10051f6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10051f544(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_b0 [48];
  undefined *local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_78 = 0x100;
  FUN_1004fa030(0x5b,0xe100000000000000);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    uStack_68 = *(undefined8 *)(param_2 + 0x28);
    local_70 = *(undefined8 *)(param_2 + 0x20);
    uStack_58 = *(undefined8 *)(param_2 + 0x38);
    uStack_60 = *(undefined8 *)(param_2 + 0x30);
    uStack_48 = *(undefined8 *)(param_2 + 0x48);
    local_50 = *(undefined8 *)(param_2 + 0x40);
    FUN_10051fe18(&local_70,auStack_b0);
    FUN_1004f9e80("",0);
    FUN_1005235c0(&local_80,(uint)param_1 & 0x1010101);
    if (unaff_x21 != 0) {
      puVar2 = &local_70;
      _swift_bridgeObjectRelease(local_80);
      FUN_10051ffe8(&local_70);
      goto LAB_10051f6ac;
    }
    FUN_10051ffe8(&local_70);
    lVar3 = lVar3 + -1;
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(param_2 + 0x50);
      do {
        uStack_68 = puVar2[1];
        local_70 = *puVar2;
        uStack_58 = puVar2[3];
        uStack_60 = puVar2[2];
        uStack_48 = puVar2[5];
        local_50 = puVar2[4];
        FUN_10051fe18(&local_70,auStack_b0);
        FUN_1004f9e80(",",1);
        FUN_1005235c0(&local_80,(uint)param_1 & 0x1010101);
        FUN_10051ffe8(&local_70);
        puVar2 = puVar2 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  FUN_1004fa030(0x5d,0xe100000000000000);
  puVar1 = local_80;
  param_1 = *(undefined8 *)(local_80 + 0x10);
  _swift_bridgeObjectRetain(local_80);
  puVar2 = (undefined8 *)(puVar1 + 0x20);
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar2,param_1);
  _swift_bridgeObjectRelease_n(puVar1,2);
LAB_10051f6ac:
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = puVar2;
  return auVar4;
}

