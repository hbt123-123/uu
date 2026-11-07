// rea decompile_all
// name: FUN_10037f8cc
// address: 0x10037f8cc
// body: available
// range: 0x10037f8cc-0x10037fb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


string * FUN_10037f8cc(long param_1,undefined8 param_2,undefined8 param_3,string *param_4,
                      undefined8 param_5)

{
  size_t sVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  string *psVar5;
  undefined8 ***local_a8 [2];
  char local_91;
  undefined8 **local_90;
  undefined8 **ppuStack_88;
  undefined8 **local_80;
  undefined8 *local_78 [2];
  char local_61;
  long local_60;
  undefined1 uStack_51;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar4 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar4 == 0 || DAT_100b366d8 == 0) {
    psVar5 = (string *)0x0;
  }
  else {
    local_60 = DAT_100b366d8;
    FUN_100392994();
    FUN_10037fd50(local_78,param_1,param_4);
    lVar2 = DAT_100b366d0;
    FUN_1003850cc(DAT_100b366d0,local_78);
    if (lVar2 == 0) {
      if (param_4 != (string *)0x0) {
        sVar1 = *(size_t *)(param_4 + 8);
        if (-1 < (char)param_4[0x17]) {
          sVar1 = (ulong)(byte)param_4[0x17];
        }
        FUN_1003856e0(local_a8,sVar1 + 1,&uStack_51);
        ppppuVar3 = (undefined8 ****)local_a8[0];
        if (-1 < local_91) {
          ppppuVar3 = local_a8;
        }
        if (sVar1 != 0) {
          psVar5 = *(string **)param_4;
          if (-1 < (char)param_4[0x17]) {
            psVar5 = param_4;
          }
          _memmove(ppppuVar3,psVar5,sVar1);
        }
        *(undefined2 *)((long)ppppuVar3 + sVar1) = 0x2f;
        ppppuVar3 = local_a8;
        std::string::append((char *)ppppuVar3);
        ppuStack_88 = ppppuVar3[1];
        local_90 = *ppppuVar3;
        local_80 = ppppuVar3[2];
        ppppuVar3[1] = (undefined8 ***)0x0;
        ppppuVar3[2] = (undefined8 ***)0x0;
        *ppppuVar3 = (undefined8 ***)0x0;
        if (local_91 < '\0') {
          operator_delete(local_a8[0]);
        }
        uVar4 = 0;
        FUN_100390428();
        if ((uVar4 & 1) == 0) {
          FUN_10039046c(&local_90);
        }
        FUN_100386734(1,"MMKV.cpp","mmkvWithID",0xff,"prepare to load %s (id %s) from rootPath %s");
        if ((long)local_80 < 0) {
          operator_delete(local_90);
        }
      }
      psVar5 = operator_new(0xe8);
      FUN_10037ee04(psVar5,param_1,param_2,param_3,param_4,param_5);
      std::string::operator=(param_4,psVar5);
      lVar2 = DAT_100b366d0;
      local_90 = local_78;
      FUN_100385758(DAT_100b366d0,local_78,PTR_piecewise_construct_1009965a8,&local_90,local_a8);
      *(string **)(lVar2 + 0x28) = psVar5;
    }
    else {
      psVar5 = *(string **)(lVar2 + 0x28);
    }
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
    FUN_100385098(&local_60);
  }
  return psVar5;
}

