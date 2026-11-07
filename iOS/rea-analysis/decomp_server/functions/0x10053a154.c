// rea decompile_all
// name: FUN_10053a154
// address: 0x10053a154
// body: available
// range: 0x10053a154-0x10053a3ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10053a154(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,byte param_5,
                  undefined8 param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x21;
  undefined1 auStack_220 [24];
  long local_208;
  undefined *local_1f8 [3];
  undefined *local_1e0;
  undefined **local_1d8;
  long local_1d0;
  long lStack_1c8;
  long local_1c0;
  long lStack_1b8;
  undefined8 local_1b0;
  byte bStack_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [40];
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *local_58;
  
  puVar4 = param_7;
  __sS2ayxGycfC();
  local_58 = puVar4;
  if ((param_2 != 0) && (0 < param_3 - param_2)) {
    FUN_1000b142c(param_6,auStack_148);
    FUN_1004f9894(auStack_148,auStack_170);
    lVar5 = 0;
    FUN_10050ef70();
    _swift_allocObject();
    uVar6 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = 0x80;
    local_1c0 = 0;
    bStack_1a8 = param_5 & 1;
    local_1d0 = param_2;
    lStack_1c8 = param_3;
    lStack_1b8 = lVar5;
    local_1b0 = param_4;
    local_178 = param_4;
    FUN_1004f9894(auStack_170,auStack_220);
    if (local_208 == 0) {
      local_1d8 = &PTR_PTR_1009d1610;
      local_1e0 = &DAT_1009d1638;
      local_1f8[0] = PTR___swiftEmptyDictionarySingleton_100995ea8;
      FUN_1005187f8(auStack_170);
      FUN_1005187f8(auStack_148);
      if (local_208 != 0) {
        FUN_1005187f8(auStack_220);
      }
    }
    else {
      FUN_1005187f8(auStack_170);
      FUN_1005187f8(auStack_148);
      thunk_FUN_1000a0074(auStack_220,local_1f8);
    }
    thunk_FUN_1000a0074(local_1f8,&uStack_1a0);
    uStack_f8 = CONCAT71(uStack_1a7,bStack_1a8);
    local_100 = local_1b0;
    uStack_e8 = uStack_198;
    uStack_f0 = uStack_1a0;
    uStack_d8 = uStack_188;
    local_e0 = local_190;
    uStack_c8 = local_178;
    uStack_d0 = uStack_180;
    lStack_118 = lStack_1c8;
    local_120 = local_1d0;
    lStack_108 = lStack_1b8;
    local_110 = local_1c0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    local_c0 = param_7;
    local_b8 = param_9;
    FUN_100527fd0(&local_58,param_7,param_9);
    lVar5 = local_110;
    if (unaff_x21 != 0) {
      FUN_10052a568(&local_120);
      _swift_bridgeObjectRelease(local_58);
      return;
    }
    lVar7 = lStack_118 - local_120;
    lVar1 = lVar7;
    lVar2 = 0;
    if (local_120 != 0) goto LAB_10053a32c;
    while (lVar1 = lVar2, local_110 != 0) {
      while( true ) {
        if (0x20 < *(byte *)(local_120 + local_110) ||
            (1L << ((ulong)*(byte *)(local_120 + local_110) & 0x3f) & 0x100002600U) == 0) {
          if (local_120 == 0) {
            if (local_110 == 0) goto LAB_10053a37c;
          }
          else if (lVar7 == local_110) goto LAB_10053a37c;
          puVar4 = local_58;
          _swift_bridgeObjectRelease();
          FUN_1004f98e4();
          _swift_allocError(&DAT_1009d03a0,puVar4,0,0);
          puVar4[1] = 0x11;
          *puVar4 = 0;
          _swift_willThrow();
          FUN_10052a568(&local_120);
          return;
        }
        if ((lVar5 < 0) || (lVar1 <= local_110)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10053a400);
          (*pcVar3)();
        }
        local_110 = local_110 + 1;
        lVar2 = lVar1;
        if (local_120 == 0) break;
LAB_10053a32c:
        if (lVar7 == local_110) goto LAB_10053a37c;
      }
    }
LAB_10053a37c:
    FUN_10052a568(&local_120);
  }
  *param_1 = local_58;
  return;
}

